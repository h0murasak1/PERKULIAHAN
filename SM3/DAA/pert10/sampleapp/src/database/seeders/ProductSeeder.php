<?php

namespace Database\Seeders;

use App\Models\Product;
use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;
use Illuminate\Support\Facades\DB;

class ProductSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        $products = [
            [
                'name' => 'Adidas',
                'price' => 1000,
                'category' => 'Sepatu',
            ],
            [
                'name' => 'Nike',
                'price' => 999,
                'category' => 'Sepatu',
            ],
            [
                'name' => 'Levis',
                'price' => 500,
                'category' => 'Celana',
            ],
            [
                'name' => 'Uniqlo',
                'price' => 100,
                'category' => 'Baju',
            ],
        ];

        foreach ($products as $product) {
            Product::create($product);
        }


    }
}
