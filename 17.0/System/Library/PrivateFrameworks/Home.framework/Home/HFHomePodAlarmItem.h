@class HMMediaProfile, NSString, NAIdentity, MTAlarm;
@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmItem : HFItem <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (copy, nonatomic) NSString *alarmIdentifier;
@property (copy, nonatomic) MTAlarm *alarm;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly, nonatomic) HMMediaProfile *mediaProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithMediaProfileContainer:(id)a0 alarm:(id)a1;

@end
