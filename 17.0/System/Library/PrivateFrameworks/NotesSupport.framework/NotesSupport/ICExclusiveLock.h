@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking> {
    int _fd;
    NSString *_name;
    NSString *_cachePath;
    NSString *_fullPath;
}

- (id)init;
- (void)dealloc;
- (void)setName:(id)a0;
- (void)lock;
- (void)unlock;
- (id)initWithName:(id)a0 cachePath:(id)a1;
- (void).cxx_destruct;
- (id)name;
- (BOOL)tryLock;

@end
