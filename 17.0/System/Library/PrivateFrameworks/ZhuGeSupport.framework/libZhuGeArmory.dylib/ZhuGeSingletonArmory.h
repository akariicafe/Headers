@interface ZhuGeSingletonArmory : NSObject

+ (id)sharedInstance;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)initData;

@end
