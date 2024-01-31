@class MTAlarm, MTTimer, NSUUID;

@interface HUMobileTimerObject : NSObject

@property (readonly, nonatomic) MTAlarm *alarm;
@property (readonly, nonatomic) MTTimer *timer;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimer:(id)a0;
- (id)initWithAlarm:(id)a0;
- (BOOL)_alarmIDsMatch:(id)a0;
- (BOOL)_timerIDsMatch:(id)a0;
- (BOOL)isIgnorableTimerObject;

@end
