@class NSCalendar, NSString, SCLScheduleSettings, NSDate;

@interface SCLSchedulingParameters : NSObject <SCLSchedulingParameters, NSCopying>

@property (copy, nonatomic) NSCalendar *calendar;
@property (copy, nonatomic) NSDate *evaluationDate;
@property (copy, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (nonatomic) unsigned long long activationSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
