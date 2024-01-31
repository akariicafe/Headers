@class NSString, GTFileWriterSessionUncompressed;

@interface GTFileWriterSessionCompressed : NSObject <GTFileWriterSession> {
    struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } _compressionStream;
    char *_decompressorOutput;
    unsigned long long _decompressorOutputSize;
    GTFileWriterSessionUncompressed *_uncompressedSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithFileEntries:(id)a0 relativeToURL:(id)a1 options:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (BOOL)finish:(id *)a0;
- (BOOL)_finalizeCompressedFileData:(id *)a0;
- (BOOL)_writeCompressedFileData:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (id)initWithFileEntries:(id)a0 relativeToURL:(id)a1 options:(id)a2 error:(id *)a3;
- (void)writeFileData:(id)a0 completionHandler:(id /* block */)a1;

@end
