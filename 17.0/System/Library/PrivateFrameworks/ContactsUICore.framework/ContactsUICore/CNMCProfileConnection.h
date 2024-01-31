@class NSString;

@interface CNMCProfileConnection : NSObject <CNMCProfileConnection>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)communicationServiceRulesExistForBundleID:(id)a0 forCommunicationServiceType:(id)a1;
- (id)defaultAppBundleIDForCommunicationServiceType:(id)a0 forAccountWithIdentifier:(id)a1;
- (id)observableForManagedConfigChanged;

@end
