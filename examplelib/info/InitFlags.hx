package examplelib.info;

@:enum abstract InitFlags(Int) {
    var INIT_VIDEO:InitFlags = 0x00000020;
    var INIT_EVENTS:InitFlags = 0x00004000;
}