@class NSURL;

@interface NTKAppleEncryptedArchiveVerificationHandle : NTKAppleEncryptedArchiveHandle {
    struct AAArchiveStream_impl { } *_archiveStream;
    struct AAArchiveStream_impl { } *_verificationStream;
    NSURL *_outputDirectoryURL;
    struct AAFieldKeySet_impl { } *_excludeFields;
}

@property (readonly) struct AAArchiveStream_impl { } *archiveStream;
@property (readonly) struct AAArchiveStream_impl { } *verificationStream;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)closeReturningError:(id *)a0;
- (id)initWithArchiveURL:(id)a0 symmetricKey:(id)a1 outputDirectoryURL:(id)a2 excludeFields:(id)a3;
- (struct AAArchiveStream_impl { } *)openReturningError:(id *)a0;

@end
