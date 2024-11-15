<?php

namespace Database\Seeders;

use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;
use App\Models\Penilaian;

class PenilaianSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        $penilaians = [
            ['nama_murid' => 'Andi', 'materi' => 'Matematika', 'nilai' => 90],
            ['nama_murid' => 'Budi', 'materi' => 'Bahasa Indonesia', 'nilai' => 85],
            ['nama_murid' => 'Citra', 'materi' => 'IPA', 'nilai' => 80],
            ['nama_murid' => 'Dewi', 'materi' => 'IPS', 'nilai' => 75],
            ['nama_murid' => 'Eko', 'materi' => 'PKN', 'nilai' => 70],
        ];

        foreach ($penilaians as $penilaian) {
            Penilaian::create($penilaian);
        }
    }
}
