@class NSURL, NSData;

@interface NTKAppleEncryptedArchiveHandle : NSObject {
    struct AAByteStream_impl { } *_encryptedStream;
    struct AEAContext_impl { } *_context;
    struct AAByteStream_impl { } *_decryptedStream;
    struct AAArchiveStream_impl { } *_archiveStream;
}

@property (readonly, copy) NSURL *archiveURL;
@property (readonly, copy) NSData *symmetricKey;
@property (copy) id /* block */ archiveEntryEvent;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)closeReturningError:(id *)a0;
- (id)initWithArchiveURL:(id)a0 symmetricKey:(id)a1;
- (struct AAArchiveStream_impl { } *)openReturningError:(id *)a0;

@end
