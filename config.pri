
CONFIG += c++11

CONFIG(debug, debug|release) {
    unix: TARGET = $$join(TARGET,,,_debug)
    else: TARGET = $$join(TARGET,,,d)

    DESTDIR = $$PWD/../build_debug_qrtest
}
CONFIG(release, debug|release) {
    DESTDIR = $$PWD/../build_release_qrtest
}
