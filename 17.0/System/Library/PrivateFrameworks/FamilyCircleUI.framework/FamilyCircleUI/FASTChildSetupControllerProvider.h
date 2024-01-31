@class NSString;

@interface FASTChildSetupControllerProvider : NSObject <FASTChildSetupControllerProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isScreenTimeSetupForDSID:(id)a0;
- (id)newChildSetupControllerOnChildDeviceWithDSID:(id)a0 childAge:(id)a1 childName:(id)a2;
- (id)newChildSetupControllerWithDSID:(id)a0 updateExistingSettings:(BOOL)a1 childAge:(id)a2 childName:(id)a3;

@end
