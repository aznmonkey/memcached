struct tracker {        /* Shared memory structure to keep track of current pointer */
    size_t max_size;
    size_t allocated_size;
};

extern void* shm_malloc(size_t n);
