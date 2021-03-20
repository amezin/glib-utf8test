project('utf8test', 'c',
    version: '0.1',
    meson_version : '>=0.47.0',
    default_options : [
        'buildtype=debugoptimized',
        'warning_level=1',
        'c_std=gnu11',
    ],
)

deps = [
    dependency('glib-2.0'),
]

executable('utf8test', 'utf8test.c', dependencies : deps, install : true)

cc = meson.get_compiler('c')

if cc.get_argument_syntax() == 'msvc'
executable('utf8test-utf8', 'utf8test.c', dependencies : deps, c_args: '/utf-8', install : true)
endif
