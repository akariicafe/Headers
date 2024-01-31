@class NSString;

@interface DYCaptureArchiveStack : NSObject <DYCaptureStore> {
    struct vector<GPUTools::objc_ref<DYCaptureArchive *>, std::allocator<GPUTools::objc_ref<DYCaptureArchive *>>> { void *__begin_; void *__end_; struct __compressed_pair<GPUTools::objc_ref<DYCaptureArchive *> *, std::allocator<GPUTools::objc_ref<DYCaptureArchive *>>> { void *__value_; } __end_cap_; } _archives;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)empty;
- (void)push:(id)a0;
- (void)close;
- (void)clear;
- (unsigned long long)size;
- (id).cxx_construct;
- (id)top;
- (id)allObjects;
- (void).cxx_destruct;
- (void)pop;
- (id)metadataValueForKey:(id)a0;
- (BOOL)getInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 forFilePosition:(unsigned long long)a1 error:(id *)a2;
- (BOOL)getInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 forFilenameBuffer:(const char *)a1 error:(id *)a2;
- (id)openFileWithFilename:(id)a0 error:(id *)a1;
- (long long)readDataForFilePosition:(unsigned long long)a0 buffer:(void *)a1 size:(unsigned long long)a2 error:(id *)a3;
- (long long)readDataForFilenameBuffer:(const char *)a0 buffer:(void *)a1 size:(unsigned long long)a2 error:(id *)a3;
- (BOOL)_stackIsEmpty:(id *)a0;
- (BOOL)acceptCaptureVisitor:(id)a0;
- (BOOL)adjunctFileExistsForFilename:(id)a0 error:(id *)a1;
- (void *)allocateAndReadDataForFilenameBuffer:(const char *)a0 outSize:(unsigned long long *)a1 error:(id *)a2;
- (void)cacheAllResources;
- (id)copyAdjunctDataForFilename:(id)a0 error:(id *)a1;
- (id)copyDataForFilePosition:(unsigned long long)a0 error:(id *)a1;
- (id)copyDataForFilename:(id)a0 error:(id *)a1;
- (id)copyDataForFilenameBuffer:(const char *)a0 error:(id *)a1;
- (BOOL)fileExistsForFilename:(id)a0 error:(id *)a1;
- (BOOL)fileExistsForFilenameBuffer:(const char *)a0 error:(id *)a1;
- (id)filenamesWithPredicate:(id)a0 error:(id *)a1;
- (id)filenamesWithPrefix:(id)a0 error:(id *)a1;
- (id)getFilenameForFilePosition:(unsigned long long)a0 error:(id *)a1;
- (BOOL)getInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 forFilename:(id)a1 error:(id *)a2;
- (struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *x0; } x2; })getSortedFilePositionsForDataCaching;
- (long long)readDataForFilename:(id)a0 buffer:(void *)a1 size:(unsigned long long)a2 error:(id *)a3;
- (void)releaseBytesForFilePosition:(unsigned long long)a0;
- (BOOL)requestDataForFilePosition:(unsigned long long)a0 buffer:(void **)a1 size:(unsigned long long *)a2 error:(id *)a3;
- (id)resolveFilename:(id)a0 error:(id *)a1;

@end
