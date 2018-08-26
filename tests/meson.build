src = ['test.cpp']
catch_dep = catch_proj.get_variable('catch_dep')

test_main = executable(
    'test_main',
    sources : src,
    dependencies : catch_dep,
    include_directories : inc,
    objects : main_prog.extract_objects())

test('test main', test_main)
