@interface FBKDEDHelper : NSObject

+ (id)_seedingHost;
+ (void)_getBugSessionConfigWithSubmissionType:(long long)a0 formId:(long long)a1 device:(id)a2 completion:(id /* block */)a3;
+ (void)_getSessionForForm:(id)a0 device:(id)a1 isAdoptingSession:(BOOL)a2 shouldGetSessionStatus:(BOOL)a3 completion:(id /* block */)a4;
+ (void)_getSessionWithIdentifier:(id)a0 configuration:(id)a1 dedDevice:(id)a2 getDetails:(BOOL)a3 shouldGetSessionStatus:(BOOL)a4 completion:(id /* block */)a5;
+ (void)_getSessionWithIdentifier:(id)a0 configuration:(id)a1 device:(id)a2 getDetails:(BOOL)a3 shouldGetSessionStatus:(BOOL)a4 completion:(id /* block */)a5;
+ (id)_seedPortal;
+ (void)_startSessionByFirstPairingWithConfig:(id)a0 device:(id)a1 grouped:(id)a2 identifier:(id)a3 shouldGetDetails:(BOOL)a4 shouldGetSessionStatus:(BOOL)a5 completion:(id /* block */)a6;
+ (id)adoptSessionIdWithExistingSessionId:(id)a0;
+ (id)bugSessionIDForAdoptingLocalFilesWithFilerForm:(id)a0;
+ (id)bugSessionIDForForm:(id)a0 device:(id)a1;
+ (void)cleanupBugSessionDirectoriesForForm:(id)a0;
+ (void)completeEnhancedLoggingWithFollowup:(id)a0 devicesController:(id)a1 completion:(id /* block */)a2;
+ (void)didFailToPinPairOnDemandWithDevice:(id)a0 error:(long long)a1 identifier:(id)a2 observer:(id)a3 completion:(id /* block */)a4;
+ (void)fetchTextDataOnMatcherPredicates:(id)a0 fromSession:(id)a1 completion:(id /* block */)a2;
+ (void)getSessionForForm:(id)a0 device:(id)a1 shouldGetSessionStatus:(BOOL)a2 completion:(id /* block */)a3;
+ (void)getStateOnSession:(id)a0 withCompletion:(id /* block */)a1;
+ (void)reconnectBugSessionWithIdentifier:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)reconnectWithBugSessionWithIdentifier:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)sendLocalFilesToDED:(id)a0 withForm:(id)a1 withCompletion:(id /* block */)a2;

@end
