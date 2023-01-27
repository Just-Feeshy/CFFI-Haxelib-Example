package examplelib.ui;

import examplelib.native.backend.ExampleNativeCFFI;
import examplelib.info.InitFlags;

class BasicWindow {
    var handle:Dynamic;

    public function new(title:String, width:Int, height:Int) {
        handle = ExampleNativeCFFI.example_create_window(title, width, height);
    }

    public static function init():Void {
        var flags = 0;

        flags |= cast InitFlags.INIT_VIDEO;
        flags |= cast InitFlags.INIT_EVENTS;

        ExampleNativeCFFI.example_init_sdl(flags);
    }
}