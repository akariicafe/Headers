@interface SBBackgroundActivityAssertionManager : NSObject

@property (readonly, nonatomic, getter=_isLegacy) BOOL isLegacy;
@property (readonly, nonatomic, getter=_isModern) BOOL isModern;

+ (id)sharedInstance;
+ (Class)_implementationClass;

- (void)updateForegroundApplicationSceneHandles:(id)a0 withOptions:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)handleTapForBackgroundActivityWithIdentifier:(id)a0;

@end
