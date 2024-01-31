@class FLFollowUpController;

@interface SSFollowUpController : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (id)_dismissFollowUpWithIdentifier:(id)a0;
- (id)_createFollowUpItemForIdentifier:(id)a0 userInfo:(id)a1;
- (id)_createFollowUpItemForRenewCredentialsWithUserInfo:(id)a0;
- (id)_postFollowUpWithIdentifier:(id)a0 userInfo:(id)a1;
- (id)dismissFollowUpWithIdentifier:(id)a0;
- (id)dismissFollowUpWithIdentifier:(id)a0 account:(id)a1;
- (id)pendingFollowUpWithIdentifier:(id)a0;
- (id)postFollowUpWithIdentifier:(id)a0 account:(id)a1 userInfo:(id)a2;
- (id)postFollowUpWithIdentifier:(id)a0 userInfo:(id)a1;

@end
