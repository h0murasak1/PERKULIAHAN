from collections import deque

def page_replacement(pages, frames, algorithm="optimal"):
    memory = []
    page_faults = 0
    
    if algorithm == "fifo":
        # FIFO menggunakan deque untuk memudahkan akses
        memory = deque(maxlen=frames)
        
    recent_usage = []  # untuk LRU

    for i, page in enumerate(pages):
        if page not in memory:
            page_faults += 1
            
            if algorithm == "fifo":
                # FIFO: Mengganti halaman yang masuk paling awal
                if len(memory) == frames:
                    memory.popleft()
                memory.append(page)

            elif algorithm == "optimal":
                # Optimal: Mencari halaman yang paling lama tidak akan digunakan
                if len(memory) < frames:
                    memory.append(page)
                else:
                    future_use = []
                    for mem_page in memory:
                        if mem_page in pages[i+1:]:
                            future_use.append(pages[i+1:].index(mem_page))
                        else:
                            future_use.append(float('inf'))
                    replace_index = future_use.index(max(future_use))
                    memory[replace_index] = page

            elif algorithm == "lru":
                # LRU: Mengganti halaman yang paling lama tidak digunakan
                if len(memory) < frames:
                    memory.append(page)
                else:
                    lru_page = recent_usage.pop(0)
                    memory[memory.index(lru_page)] = page

            # Tambah atau update recent_usage untuk LRU
            if algorithm == "lru":
                recent_usage.append(page)
                
        else:
            # Jika halaman sudah ada di memori
            if algorithm == "lru":
                recent_usage.remove(page)
                recent_usage.append(page)

        # Cetak kondisi memori setelah setiap langkah
        print(f"Step {i + 1}, Page: {page}, Memory: {list(memory) if algorithm == 'fifo' else memory}")

    print(f"Total Page Faults with {algorithm.upper()} algorithm: {page_faults}")

# Contoh penggunaan
pages = [7, 0, 1, 2, 0, 3, 0, 4]
frames = 3

print("Optimal Algorithm:")
page_replacement(pages, frames, algorithm="optimal")

print("\nLRU Algorithm:")
page_replacement(pages, frames, algorithm="lru")

print("\nFIFO Algorithm:")
page_replacement(pages, frames, algorithm="fifo")
