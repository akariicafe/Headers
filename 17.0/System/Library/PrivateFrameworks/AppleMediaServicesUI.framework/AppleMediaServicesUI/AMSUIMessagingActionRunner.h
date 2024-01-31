@interface AMSUIMessagingActionRunner : NSObject

+ (BOOL)canRespondToDeeplink:(id)a0;
+ (BOOL)canRespondToIdentifier:(id)a0;
+ (id)performWithDeeplink:(id)a0 context:(id)a1 parameters:(id)a2;
+ (id)performWithIdentifier:(id)a0 context:(id)a1 parameters:(id)a2;

- (id)init;
- (void).cxx_destruct;

@end
