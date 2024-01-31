@class NSString, EKTravelEngineHypothesis, NSDate;

@interface CALNMutableTriggeredEventNotificationData : CALNTriggeredEventNotificationData <NSCopying>

@property (copy, nonatomic) NSString *alarmID;
@property (nonatomic) BOOL isOffsetFromTravelTimeStart;
@property (copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (copy, nonatomic) EKTravelEngineHypothesis *hypothesis;
@property (nonatomic) BOOL hasDisplayedLeaveByMessage;
@property (nonatomic) BOOL hasDisplayedLeaveNowMessage;
@property (nonatomic) BOOL hasDisplayedRunningLateMessage;
@property (copy, nonatomic) NSDate *lastTimeNotificationAdded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAlarmID:(id)a0;
- (void)setHasDisplayedLeaveNowMessage:(BOOL)a0;
- (void)setIsOffsetFromTravelTimeStart:(BOOL)a0;
- (void)setHasDisplayedLeaveByMessage:(BOOL)a0;
- (void)setHasDisplayedRunningLateMessage:(BOOL)a0;
- (void)setHypothesis:(id)a0;
- (void)setLastFireTimeOfAlertOffsetFromTravelTime:(id)a0;
- (void)setLastTimeNotificationAdded:(id)a0;

@end
