@interface FAFollowupManager : NSObject

+ (void)teardownFollowUpWithContext:(id)a0 completion:(id /* block */)a1;
+ (id)_followupManager;
+ (void)synchronizeFollowupWithPayload:(id)a0 altDSID:(id)a1;
+ (void)tearDownFollowupItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)teardownPendingFollowup;

@end
