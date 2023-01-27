package examplelib.native.backend;

#if (neko || cppia)
import lime.system.CFFI;
#end

class ExampleNativeCFFI {
    #if (cpp && !cppia)
    public static var example_init_sdl = cpp.Callable<Int->cpp.Void>(cpp.Prime._loadPrime("examplelib", "example_init_sdl", "iv", false));
    public static var example_create_window = cpp.Callable<String->Int->Int->cpp.Object>(cpp.Prime._loadPrime("examplelib", "example_create_window", "siio", false));

    #elseif (neko || cppia)
    public static var example_init_sdl = CFFI.load("examplelib", "example_init_sdl", 1);
    public static var example_create_window = CFFI.load("examplelib", "example_create_window", 3);

    #else
    public static function example_init_sdl(flags:Int):Void {
        return;
    }

    public static function example_create_window(title:String, width:Int, height:Int):Dynamic {
        return null;
    }
    #end
}