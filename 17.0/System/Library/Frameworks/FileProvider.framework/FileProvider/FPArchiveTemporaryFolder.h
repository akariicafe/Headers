@class NSURL;

@interface FPArchiveTemporaryFolder : NSObject {
    NSURL *_url;
    BOOL _didStartAccessing;
    NSURL *_temporaryFolderURL;
}

- (id)initWithURL:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)temporaryFolderURLGetError:(id *)a0;

@end
