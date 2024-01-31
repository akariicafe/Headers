@class NSString;

@interface FAScreenTimeRequestProvider : NSObject <FAScreenTimeRequestProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cacheScreenTimeSettingToDiskWithDSID:(id)a0 screentimeObject:(id)a1 completionHandler:(id /* block */)a2;
- (void)enableScreenTimeSettingsForDSID:(id)a0 screentimeObject:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateScreenTimeServerFlagSettingsForDSID:(id)a0 ephemeralAuthResults:(id)a1 enabled:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
