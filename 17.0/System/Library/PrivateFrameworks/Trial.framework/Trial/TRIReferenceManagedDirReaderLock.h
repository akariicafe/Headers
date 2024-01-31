@class NSString, _PASLock;

@interface TRIReferenceManagedDirReaderLock : NSObject {
    NSString *_dir;
    _PASLock *_lock;
}

- (id)init;
- (void)dealloc;
- (void)unlock;
- (id)initWithDir:(id)a0;
- (void).cxx_destruct;

@end
