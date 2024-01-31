@interface AOSThreadManager : NSObject

+ (id)sharedManager;

- (void)dealloc;
- (void)runAuthThreadWithContext:(id)a0;

@end
