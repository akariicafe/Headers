@class NSString;

@interface HFAccessorySettingSiriHistoryAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowSettingsEntity:(id)a0;
- (id)initWithHomeKitSettingsVendor:(id)a0 keyPaths:(id)a1 mode:(unsigned long long)a2 updateHandler:(id /* block */)a3;
- (id)initWithHomeKitSettingsVendor:(id)a0 mode:(unsigned long long)a1;

@end
