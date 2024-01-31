@class NSString;

@interface PCDistributedLock : NSObject <NSLocking> {
    NSString *_path;
    int _fd;
}

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void)lock;
- (id)initWithName:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (BOOL)tryLock;
- (BOOL)_lockBlocking:(BOOL)a0;

@end
