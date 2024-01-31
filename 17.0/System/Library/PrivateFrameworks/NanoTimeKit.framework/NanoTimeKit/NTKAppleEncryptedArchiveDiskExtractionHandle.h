@class NSURL, NSString;

@interface NTKAppleEncryptedArchiveDiskExtractionHandle : NTKAppleEncryptedArchiveHandle {
    struct AAArchiveStream_impl { } *_outputStream;
    NSURL *_outputDirectoryURL;
    NSString *_fileProtection;
}

@property (readonly) struct AAArchiveStream_impl { } *archiveStream;
@property (readonly) struct AAArchiveStream_impl { } *outputStream;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)closeReturningError:(id *)a0;
- (id)initWithArchiveURL:(id)a0 symmetricKey:(id)a1 outputDirectoryURL:(id)a2 fileProtection:(id)a3;
- (struct AAArchiveStream_impl { } *)openReturningError:(id *)a0;

@end
