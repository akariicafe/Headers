@class NSString, NSURL;

@interface PLExclusiveFileLock : NSObject <PLUnlocker> {
    NSURL *_url;
    int _fd;
}

@property (readonly, nonatomic) BOOL isLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (id)init;
- (void)dealloc;
- (void)unlock;
- (void).cxx_destruct;
- (id)lockData;
- (id)lockFailure;
- (BOOL)lockWithError:(id *)a0;

@end
