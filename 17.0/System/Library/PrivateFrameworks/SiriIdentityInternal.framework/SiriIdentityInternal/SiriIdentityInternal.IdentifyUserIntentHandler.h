@class UserIdentifyIntentResponse, UserIdentifyIdentityResolutionResult, UserIdentifyIntent;

@interface SiriIdentityInternal.IdentifyUserIntentHandler : NSObject <UserIdentifyIntentHandling>

- (id)init;
- (void)confirmUserIdentify:(UserIdentifyIntent *)a0 completion:(void (^)(UserIdentifyIntentResponse *))a1;
- (void)handleUserIdentify:(UserIdentifyIntent *)a0 completion:(void (^)(UserIdentifyIntentResponse *))a1;
- (void)resolveIdentityForUserIdentify:(UserIdentifyIntent *)a0 withCompletion:(void (^)(UserIdentifyIdentityResolutionResult *))a1;

@end
