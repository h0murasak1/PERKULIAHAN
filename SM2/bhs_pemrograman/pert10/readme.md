docker-compose up -d --build

docker exec -it pemrog bash

composer create-project laravel/laravel

chmod 777 -R storage/\*

composer require filament/filament

mv .envv.example .env

php artisan key:generate

setup databasenya dengan cara masuk ke 'nano .env'
db host: db
db root: root
db pass: p455w0rd

php artisan filament:install --panels

php artisan migrate

php artisan make:filament-user
setupnya
admin
admin@admin.com
password

akses localhost/admin input admin@admin.com isikan password dengan password

php artisan make:model product -m

cari folder database migration product
tambahin $table->string('name');

php artisan migrate

rubah dulu model di app/Models/product.php
isikan protected $fillable = [
'name',
];

php artisan make:filament-resource Product --generate

chmod 777 -R storage/\*
