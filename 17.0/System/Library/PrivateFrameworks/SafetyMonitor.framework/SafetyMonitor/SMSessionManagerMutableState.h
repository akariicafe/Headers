@class NSUUID, SMSessionConfiguration, NSString, NSData, SMSessionMonitorContext, NSDate, CLLocation;

@interface SMSessionManagerMutableState : SMSessionManagerState <NSCopying, NSMutableCopying>

@property (nonatomic) unsigned long long sessionState;
@property (copy, nonatomic) SMSessionConfiguration *configuration;
@property (nonatomic) long long userTriggerResponse;
@property (copy, nonatomic) SMSessionMonitorContext *monitorContext;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSData *allowReadToken;
@property (copy, nonatomic) NSData *safetyCacheKey;
@property (copy, nonatomic) NSString *startMessageGUID;
@property (copy, nonatomic) NSString *scheduledSendMessageGUID;
@property (copy, nonatomic) NSDate *scheduledSendMessageDate;
@property (copy, nonatomic) NSUUID *activeDeviceIdentifier;
@property (copy, nonatomic) NSDate *estimatedEndDate;
@property (copy, nonatomic) NSDate *coarseEstimatedEndDate;
@property (nonatomic) unsigned long long estimatedEndDateStatus;
@property (nonatomic) unsigned long long sessionEndReason;
@property (copy, nonatomic) NSDate *sessionStateTransitionDate;
@property (copy, nonatomic) NSUUID *activePairedDeviceIdentifier;

- (void)setDate:(id)a0;
- (void)setConfiguration:(id)a0;
- (void)setLocation:(id)a0;
- (void)setSessionState:(unsigned long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSessionEndReason:(unsigned long long)a0;
- (void)setActiveDeviceIdentifier:(id)a0;
- (void)setActivePairedDeviceIdentifier:(id)a0;
- (void)setAllowReadToken:(id)a0;
- (void)setCoarseEstimatedEndDate:(id)a0;
- (void)setEstimatedEndDate:(id)a0;
- (void)setEstimatedEndDateStatus:(unsigned long long)a0;
- (void)setMonitorContext:(id)a0;
- (void)setSafetyCacheKey:(id)a0;
- (void)setScheduledSendMessageDate:(id)a0;
- (void)setScheduledSendMessageGUID:(id)a0;
- (void)setSessionStateTransitionDate:(id)a0;
- (void)setStartMessageGUID:(id)a0;
- (void)setUserTriggerResponse:(long long)a0;

@end
