@interface ZhuGeSingleton : NSObject

+ (id)sharedInstance;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)initData;

@end
