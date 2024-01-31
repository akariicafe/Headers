@class HMHome, NSMutableSet, NSString;
@protocol HFCharacteristicValueSource;

@interface HFMediaAccessoryItemProvider : HFItemProvider <HFMediaAccessoryCommonSettingsDelegate>

@property (retain, nonatomic) NSMutableSet *mediaAccessoryItems;
@property (retain, nonatomic) id<HFCharacteristicValueSource> overrideValueSource;
@property (nonatomic) BOOL includeSiriEndPointProfiles;
@property (nonatomic) BOOL includeContainedProfiles;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) BOOL includeMediaSystems;
@property (retain, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)initWithHome:(id)a0 includeContainedProfiles:(BOOL)a1;
- (id)initWithHome:(id)a0 includeSiriEndPointProfiles:(BOOL)a1;
- (id)invalidationReasons;
- (void)mediaProfileContainer:(id)a0 didUpdateSettingKeypath:(id)a1 value:(id)a2;
- (id)_siriEndpoints;
- (id)initWithHome:(id)a0 includeMediaSystems:(BOOL)a1;

@end
