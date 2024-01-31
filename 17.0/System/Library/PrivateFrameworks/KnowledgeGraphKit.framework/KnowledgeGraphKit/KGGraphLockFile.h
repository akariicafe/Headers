@class NSURL;

@interface KGGraphLockFile : NSObject {
    int _fd;
    BOOL _locked;
    NSURL *_fileURL;
}

- (id)initWithDatabaseURL:(id)a0;
- (BOOL)lock;
- (void)unlock;
- (void).cxx_destruct;
- (BOOL)isLocked;

@end
