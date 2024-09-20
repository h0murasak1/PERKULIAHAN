<?php

/** @var \Laravel\Lumen\Routing\Router $router */

/*
|--------------------------------------------------------------------------
| Application Routes
|--------------------------------------------------------------------------
|
| Here is where you can register all of the routes for an application.
| It is a breeze. Simply tell Lumen the URIs it should respond to
| and give it the Closure to call when that URI is requested.
|
*/

$router->get('/', function () use ($router) {
    return $router->app->version();
});

$router->group(['prefix' => 'api/v1/members', 'middleware' => 'auth'], function() use ($router) {
    $router->get('/', 'MemberController@index');
    $router->post('/', 'MemberController@store');
    $router->get('/{id}', 'MemberController@show');
    $router->put('/{id}', 'MemberController@update');
    $router->delete('/{id}', 'MemberController@destroy');
});

$router->group(['prefix' => 'api/v1/courses', 'middleware' => 'auth'], function() use ($router) {
    $router->get('/', 'CourseController@index');
    $router->post('/', 'CourseController@store');
    $router->get('/{id}', 'CourseController@show');
    $router->put('/{id}', 'CourseController@update');
    $router->delete('/{id}', 'CourseController@destroy');
});

$router->group(['prefix' => 'api/v1/enrollments', 'middleware' => 'auth'], function() use ($router) {
    $router->get('/', 'EnrollmentController@index');
    $router->post('/', 'EnrollmentController@store');
    $router->get('/{id}', 'EnrollmentController@show');
    $router->put('/{id}', 'EnrollmentController@update');
    $router->delete('/{id}', 'EnrollmentController@destroy');
});

$router->group(['prefix' => 'api/v1/materials', 'middleware' => 'auth'], function() use ($router) {
    $router->get('/', 'MaterialController@index');
    $router->post('/', 'MaterialController@store');
    $router->get('/{id}', 'MaterialController@show');
    $router->put('/{id}', 'MaterialController@update');
    $router->delete('/{id}', 'MaterialController@destroy');
});

$router->group(['prefix' => 'api/v1/assessments', 'middleware' => 'auth'], function() use ($router) {
    $router->get('/', 'AssessmentController@index');
    $router->post('/', 'AssessmentController@store');
    $router->get('/{id}', 'AssessmentController@show');
    $router->put('/{id}', 'AssessmentController@update');
    $router->delete('/{id}', 'AssessmentController@destroy');
});

$router->group(['prefix' => 'api/v1/grades', 'middleware' => 'auth'], function() use ($router) {
    $router->get('/', 'GradeController@index');
    $router->post('/', 'GradeController@store');
    $router->get('/{id}', 'GradeController@show');
    $router->put('/{id}', 'GradeController@update');
    $router->delete('/{id}', 'GradeController@destroy');
});
