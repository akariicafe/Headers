@class NSString, NSMutableDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface DYCaptureArchive : NSObject <DYCaptureStore> {
    NSURL *_url;
    unsigned long long _options;
    struct { unsigned int fourcc; unsigned int version; unsigned int hash_table_length; unsigned int file_table_length; unsigned int name_table_length; } _header;
    struct { unsigned int x0; unsigned int x1; unsigned int x2; } *_hash_table;
    struct { unsigned int x0; union { unsigned int x0; unsigned int x1; } x1; long long x2; unsigned int x3; unsigned int x4; } *_file_table;
    struct { unsigned short x0; } *_name_table;
    unsigned int _file_table_capacity;
    unsigned int _name_table_capacity;
    void *_string_table_storage;
    unsigned long long _string_table_capacity;
    unsigned long long *_string_table_offsets;
    id *_string_table_nscache;
    NSMutableDictionary *_aliasCreationMap;
    void *_store_write_buffer;
    void *_store_write_ptr;
    NSMutableDictionary *_metadata;
    void *_read_buffer;
    long long _read_buffer_capacity;
    int _read_buffer_tokens_lock;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _read_buffer_tokens;
    NSObject<OS_dispatch_semaphore> *_read_buffer_sem;
    NSObject<OS_dispatch_queue> *_write_queue;
    NSObject<OS_dispatch_group> *_add_group;
    int _lock_readers;
    NSObject<OS_dispatch_semaphore> *_lock_global_semaphore;
    int _blocking_readers;
    long long _backingStoreSize;
    long long _backingStoreWritePosition;
    int _backingStoreFD;
    unsigned int _open_file_count;
    BOOL _modified;
    struct atomic<unsigned long> { struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> { _Atomic unsigned long long __a_value; } __a_; } _preloadAtomicIndex;
    unsigned long long _cacheSize;
    struct vector<DYCaptureArchiveCacheEntry, std::allocator<DYCaptureArchiveCacheEntry>> { struct *__begin_; struct *__end_; struct __compressed_pair<DYCaptureArchiveCacheEntry *, std::allocator<DYCaptureArchiveCacheEntry>> { struct *__value_; } __end_cap_; } _cacheTable;
    BOOL _useCache;
    char *_scratch;
    unsigned long long _scratchSize;
}

@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic, getter=isClosed) BOOL closed;
@property (readonly, retain, nonatomic) NSURL *url;
@property (readonly, retain, nonatomic) NSString *path;
@property (readonly, nonatomic) struct __CFUUID { } *uuid;
@property (nonatomic) BOOL deleteOnClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)coreArchiveBundleFilesPredicate;
+ (unsigned long long)contextFromFilename:(id)a0;
+ (id)createArchiveInTemporaryDirectory:(id *)a0;
+ (id)createArchiveInTemporaryDirectoryWithName:(id)a0 deleteOnClose:(BOOL)a1 error:(id *)a2;
+ (id)createArchiveInTemporaryDirectoryWithName:(id)a0 error:(id *)a1;
+ (id)getReturnAllFilesPredicate;
+ (id)internalFilenamePredicate;
+ (BOOL)isFunctionStreamFilename:(id)a0;
+ (BOOL)isInternalFilename:(id)a0;
+ (BOOL)isNotSpecialFilename:(id)a0;
+ (id)standardFunctionStreamFilenamePredicate;
+ (id)standardFunctionStreamFilenamePrefixes;

- (void)close;
- (void)setTargetQueue:(id)a0;
- (id)init;
- (int)_tryAgain:(struct { unsigned long long x0; unsigned long long x1; int x2; id x3; } *)a0;
- (void)dealloc;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)metadataValueForKey:(id)a0;
- (BOOL)commit:(id *)a0;
- (BOOL)setMetadataValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)_header;
- (struct { unsigned int x0; unsigned int x1; unsigned int x2; } *)_hashTable;
- (void)_printUsage;
- (void)initCache;
- (BOOL)getInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 forFilePosition:(unsigned long long)a1 error:(id *)a2;
- (BOOL)getInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 forFilenameBuffer:(const char *)a1 error:(id *)a2;
- (id)openFileWithFilename:(id)a0 error:(id *)a1;
- (long long)readDataForFilePosition:(unsigned long long)a0 buffer:(void *)a1 size:(unsigned long long)a2 error:(id *)a3;
- (long long)readDataForFilenameBuffer:(const char *)a0 buffer:(void *)a1 size:(unsigned long long)a2 error:(id *)a3;
- (id)_copyDataForFilePosition:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_getInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 forFilePosition:(unsigned long long)a1 error:(id *)a2;
- (void)_performEmptyStringTableNSCache;
- (unsigned int)_findHashEntry:(const char *)a0;
- (BOOL)_performCommit:(id *)a0;
- (void)_springCleaning;
- (BOOL)addAlias:(id)a0 forName:(id)a1 options:(id)a2 error:(id *)a3;
- (void)discardAndClose;
- (void)_cleanBytes:(unsigned long long)a0 andSkip:(struct { unsigned long long x0; unsigned long long x1; int x2; id x3; } *)a1;
- (BOOL)_createNewArchiveAtPath:(id)a0 error:(id *)a1;
- (unsigned int)_createNewFileEntry;
- (unsigned int)_createNewHashEntry:(const char *)a0 didGrowTable:(BOOL *)a1;
- (unsigned int)_createNewNameEntry;
- (void)_fileObjectDidDeallocate;
- (void)_fileObjectDidInitialize;
- (struct { unsigned int x0; union { unsigned int x0; unsigned int x1; } x1; long long x2; unsigned int x3; unsigned int x4; } *)_fileTable;
- (void)_fillStringTableNSCacheForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_flushWriteBuffer:(id *)a0;
- (id)_getCFilename:(id)a0 outSize:(unsigned long long *)a1 error:(id *)a2;
- (void)_growHashTable;
- (BOOL)_loadArchiveAtPath:(id)a0 error:(id *)a1;
- (struct { unsigned short x0; } *)_nameTable;
- (BOOL)_performAddAlias:(id)a0 targetting:(id)a1 error:(id *)a2;
- (unsigned int)_performAddFileWithName:(id)a0 dataSize:(unsigned int)a1 error:(id *)a2;
- (unsigned int)_performAddFileWithName:(id)a0 dataSize:(unsigned int)a1 withFlags:(unsigned int)a2 error:(id *)a3;
- (BOOL)_performFinalizeAddFileAtPosition:(unsigned int)a0 name:(id)a1 data:(id)a2 error:(id *)a3;
- (BOOL)_performReplaceDataOfFile:(id)a0 withData:(id)a1 error:(id *)a2;
- (long long)_readDataForFilePosition:(unsigned long long)a0 buffer:(void *)a1 size:(unsigned long long)a2 error:(id *)a3;
- (id)_readRawDataForFilePosition:(unsigned int)a0 error:(id *)a1;
- (BOOL)_requestDataForFilePosition:(unsigned long long)a0 buffer:(void **)a1 size:(unsigned long long *)a2 error:(id *)a3;
- (unsigned long long)_reserveStringStorageSize:(unsigned long long)a0;
- (id)_resolveCFilename:(const char *)a0 error:(id *)a1;
- (int)_storeFileDescriptor;
- (unsigned long long *)_stringTableOffsets;
- (void *)_stringTableStorage;
- (void)_swapFileTable;
- (void)_swapHashTable;
- (void)_swapNameTable;
- (long long)_writeBufferToBackingStore:(const void *)a0 size:(long long)a1 error:(id *)a2;
- (BOOL)_writeIndexInPath:(id)a0 error:(id *)a1;
- (BOOL)_writeMetadataInPath:(id)a0 error:(id *)a1;
- (BOOL)acceptCaptureVisitor:(id)a0;
- (BOOL)addAlias:(id)a0 forName:(id)a1 options:(id)a2 error:(id *)a3 waitUntilDone:(BOOL)a4;
- (BOOL)addCaptureFile:(id)a0 options:(id)a1 error:(id *)a2 waitUntilDone:(BOOL)a3;
- (BOOL)addFileWithName:(id)a0 data:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)addFileWithName:(id)a0 data:(id)a1 options:(id)a2 error:(id *)a3 waitUntilDone:(BOOL)a4;
- (BOOL)addFilesFromArchive:(id)a0 error:(id *)a1 passingTest:(id /* block */)a2;
- (BOOL)addTempFileWithName:(id)a0 options:(id)a1 fromLocation:(id)a2 error:(id *)a3;
- (BOOL)adjunctFileExistsForFilename:(id)a0 error:(id *)a1;
- (void *)allocateAndReadDataForFilenameBuffer:(const char *)a0 outSize:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)allocatePageAlignedMemory:(void **)a0 forFilePosition:(unsigned long long)a1 error:(id *)a2;
- (void)cacheAllResources;
- (BOOL)commitForExport:(id *)a0 progressHandler:(id /* block */)a1;
- (id)copyAdjunctDataForFilename:(id)a0 error:(id *)a1;
- (id)copyDataForFilePosition:(unsigned long long)a0 error:(id *)a1;
- (id)copyDataForFilename:(id)a0 error:(id *)a1;
- (id)copyDataForFilenameBuffer:(const char *)a0 error:(id *)a1;
- (unsigned long long)countOfFilenames;
- (BOOL)fileExistsForFilename:(id)a0 error:(id *)a1;
- (BOOL)fileExistsForFilenameBuffer:(const char *)a0 error:(id *)a1;
- (id)filenamesAtIndexes:(id)a0;
- (id)filenamesWithPredicate:(id)a0 error:(id *)a1;
- (id)filenamesWithPrefix:(id)a0 error:(id *)a1;
- (id)getFilenameForFilePosition:(unsigned long long)a0 error:(id *)a1;
- (void)getFilenames:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)getInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 forFilename:(id)a1 error:(id *)a2;
- (struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *x0; } x2; })getSortedFilePositionsForDataCaching;
- (id)objectInFilenamesAtIndex:(unsigned long long)a0;
- (long long)readDataForFilename:(id)a0 buffer:(void *)a1 size:(unsigned long long)a2 error:(id *)a3;
- (void)releaseBytesForFilePosition:(unsigned long long)a0;
- (BOOL)replaceDataOfFile:(id)a0 withData:(id)a1 error:(id *)a2;
- (BOOL)requestBuffer:(void **)a0 forFilePosition:(unsigned long long)a1 cacheEntry:(struct { unsigned long long x0; unsigned long long x1; int x2; id x3; } *)a2 needsData:(BOOL *)a3 error:(id *)a4;
- (BOOL)requestDataForFilePosition:(unsigned long long)a0 buffer:(void **)a1 size:(unsigned long long *)a2 error:(id *)a3;
- (void)resizeCache;
- (id)resolveFilename:(id)a0 error:(id *)a1;
- (void)setMetadataFromArchive:(id)a0;
- (BOOL)storeAdjunctData:(id)a0 filename:(id)a1 error:(id *)a2;
- (BOOL)updateDataReferenceCounts:(id)a0 error:(id *)a1;

@end
