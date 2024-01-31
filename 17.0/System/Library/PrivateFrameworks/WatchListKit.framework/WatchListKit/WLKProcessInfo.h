@interface WLKProcessInfo : NSObject

@property (nonatomic) struct __SecTask { } *currentTask;

+ (id)currentProcessInfo;

- (id)init;
- (void)dealloc;
- (id)valueForEntitlement:(id)a0;
- (BOOL)boolValueForEntitlement:(id)a0;
- (BOOL)valueForEntitlement:(id)a0 containsObject:(id)a1;

@end
