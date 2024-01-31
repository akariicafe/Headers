@class NSData, NSDictionary;

@interface CMFallStatsItemsIterator : NSObject <NSFastEnumeration> {
    NSData *_data;
    NSDictionary *_item;
    struct Reader { struct Delegate *fDelegate; int fFd; unsigned long long fMappedSize; unsigned long long fMappedOffset; char *fMappedData; BOOL fMustScan; struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } fZStream; struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } fUncompressedSens; unsigned long long fSensRemaining; char *fSensData; } fMslReader;
    struct MemoryDelegate { void /* function */ **_vptr$Delegate; char *fBuffer; unsigned long long fLength; } fMslReaderDelegate;
    struct ReaderIterator { struct Reader *fReader; struct shared_ptr<CMMsl::Item> { struct Item *__ptr_; struct __shared_weak_count *__cntrl_; } fItem; } fMslIterator;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
