@class NSMutableSet;

@interface AppleKeyboardStateManager : NSObject

@property (retain, nonatomic) NSMutableSet *capsLockStateTable;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isCapsLockEnabled:(id)a0;
- (void)setCapsLockEnabled:(BOOL)a0 locationID:(id)a1;

@end
