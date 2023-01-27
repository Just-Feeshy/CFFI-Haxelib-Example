package examplelib.ui;

import examplelib.native.backend.ExampleNativeCFFI;

class BasicWindow {
    var handle:Dynamic;

    public function new(title:String, width:Int, height:Int) {
        handle = ExampleNativeCFFI.example_create_window(title, width, height);
    }

    public static function init():Void {
        var flags:Int;

        flags |= 0x00000020;
        flags |= 0x00004000;

        ExampleNativeCFFI.example_init_sdl(flags);
    }
}