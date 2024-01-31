@class NSSet, NAIdentity, HMSettings, NSString, HMSetting;

@interface _HFObservedAccessorySettingState : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) HMSettings *settings;
@property (readonly, nonatomic) HMSetting *setting;
@property (readonly, copy, nonatomic) NSSet *selectionOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stateWithSettings:(id)a0 forSetting:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSettings:(id)a0 setting:(id)a1;

@end
