@interface OVMarisaTrie : NSObject {
    struct Trie { struct scoped_ptr<marisa::grimoire::trie::LoudsTrie> { struct LoudsTrie *ptr_; } trie_; } trie;
    struct Keyset { struct scoped_array<marisa::scoped_array<char>> { void *array_; } base_blocks_; unsigned long long base_blocks_size_; unsigned long long base_blocks_capacity_; struct scoped_array<marisa::scoped_array<char>> { void *array_; } extra_blocks_; unsigned long long extra_blocks_size_; unsigned long long extra_blocks_capacity_; struct scoped_array<marisa::scoped_array<marisa::Key>> { void *array_; } key_blocks_; unsigned long long key_blocks_size_; unsigned long long key_blocks_capacity_; char *ptr_; unsigned long long avail_; unsigned long long size_; unsigned long long total_length_; } keyset;
}

@property (readonly, nonatomic) long long count;

- (void)writeToURL:(id)a0;
- (id)initWithURL:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateAllEntriesWithBlock:(id /* block */)a0;
- (void)addRow:(id)a0;
- (void)addKey:(id)a0 payload:(id)a1;
- (void)enumerateAllRowsWithBlock:(id /* block */)a0;
- (void)lookupKey:(id)a0 resultBlock:(id /* block */)a1;
- (void)lookupPrefix:(id)a0 resultBlock:(id /* block */)a1;
- (BOOL)lookupRow:(id)a0 outIdx:(long long *)a1;
- (id)reverseLookup:(int)a0;
- (BOOL)reverseLookupKey:(int)a0 dataLength:(unsigned long long)a1 resultBlock:(id /* block */)a2;
- (id)reverseLookupRow:(int)a0;

@end
