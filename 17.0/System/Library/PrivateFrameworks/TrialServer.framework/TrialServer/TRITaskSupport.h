@interface TRITaskSupport : NSObject <TRITaskSetProviding>

+ (id)sharedInstance;

- (Class)taskClassForTaskType:(int)a0;
- (id)XPCTaskAllowlist;

@end
