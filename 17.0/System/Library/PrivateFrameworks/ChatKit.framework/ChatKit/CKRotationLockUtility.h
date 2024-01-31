@class UIWindow;

@interface CKRotationLockUtility : NSObject

@property (weak, nonatomic) UIWindow *lockedWindow;

- (void)dealloc;
- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;
- (void)releaseRotationLock;

@end
