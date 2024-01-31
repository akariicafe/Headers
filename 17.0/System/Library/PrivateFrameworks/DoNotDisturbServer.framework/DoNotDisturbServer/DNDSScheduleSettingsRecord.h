@class NSNumber, NSString;

@interface DNDSScheduleSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp;
@property (readonly, copy, nonatomic) NSNumber *scheduleEnabledSetting;
@property (readonly, copy, nonatomic) NSNumber *timePeriodStartTimeHour;
@property (readonly, copy, nonatomic) NSNumber *timePeriodStartTimeMinute;
@property (readonly, copy, nonatomic) NSNumber *timePeriodEndTimeHour;
@property (readonly, copy, nonatomic) NSNumber *timePeriodEndTimeMinute;
@property (readonly, copy, nonatomic) NSNumber *timePeriodWeekdays;
@property (readonly, copy, nonatomic) NSNumber *bedtimeBehaviorEnabledSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)_recordWithEncodedInfo:(id)a0 error:(id *)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)recordForLegacyBehaviorOverride:(id)a0 lastUpdated:(id)a1;

- (id)init;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)_initWithRecord:(id)a0;
- (id)legacyBehaviorOverride;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithLastUpdatedTimestamp:(id)a0 scheduleEnabledSetting:(id)a1 timePeriodStartTimeHour:(id)a2 timePeriodStartTimeMinute:(id)a3 timePeriodEndTimeHour:(id)a4 timePeriodEndTimeMinute:(id)a5 timePeriodWeekdays:(id)a6 bedtimeBehaviorEnabledSetting:(id)a7;

@end
