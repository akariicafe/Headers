@class NSString;

@interface TRITempDirScopeGuard : NSObject {
    BOOL _isDisposed;
}

@property (readonly, nonatomic) NSString *canonicalPath;
@property (readonly, nonatomic) NSString *path;

+ (BOOL)ifUnreferencedCleanupPath:(id)a0;
+ (id)refCountsLock;

- (id)initWithPath:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)dispose;
- (void).cxx_destruct;

@end
