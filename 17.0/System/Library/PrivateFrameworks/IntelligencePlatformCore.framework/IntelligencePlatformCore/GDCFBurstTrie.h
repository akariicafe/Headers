@interface GDCFBurstTrie : NSObject {
    struct _CFBurstTrie { } *_trie;
}

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (unsigned int)payloadForUTF8String:(const char *)a0 length:(unsigned long long)a1;
- (void)runBlockWithTrie:(id /* block */)a0;
- (unsigned int)payloadForString:(id)a0;
- (unsigned int)payloadForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
