@class NSUUID, SMSessionConfiguration, NSString, NSData, CLLocation, NSDate, SMSessionMonitorContext;

@interface SMSessionManagerState : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDate *sessionStateTransitionDate;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (readonly, nonatomic) unsigned long long sessionState;
@property (readonly, copy, nonatomic) SMSessionConfiguration *configuration;
@property (readonly, nonatomic) long long userTriggerResponse;
@property (readonly, copy, nonatomic) SMSessionMonitorContext *monitorContext;
@property (readonly, copy, nonatomic) NSData *allowReadToken;
@property (readonly, copy, nonatomic) NSData *safetyCacheKey;
@property (readonly, copy, nonatomic) NSString *startMessageGUID;
@property (readonly, copy, nonatomic) NSString *scheduledSendMessageGUID;
@property (readonly, copy, nonatomic) NSDate *scheduledSendMessageDate;
@property (readonly, copy, nonatomic) NSUUID *activeDeviceIdentifier;
@property (readonly, copy, nonatomic) NSDate *estimatedEndDate;
@property (readonly, copy, nonatomic) NSDate *coarseEstimatedEndDate;
@property (readonly, nonatomic) unsigned long long estimatedEndDateStatus;
@property (readonly, nonatomic) unsigned long long sessionEndReason;
@property (readonly, copy, nonatomic) NSUUID *activePairedDeviceIdentifier;

+ (id)convertSessionStateToString:(unsigned long long)a0;
+ (id)convertEstimatedEndDateStatusToString:(unsigned long long)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)outputToDictionary;
- (BOOL)isActiveState;
- (id)cacheReleaseDate;
- (id)initWithSessionState:(unsigned long long)a0 configuration:(id)a1 userTriggerResponse:(long long)a2 monitorContext:(id)a3 date:(id)a4 location:(id)a5 allowReadToken:(id)a6 safetyCacheKey:(id)a7 startMessageGUID:(id)a8 scheduledSendMessageGUID:(id)a9 scheduledSendMessageDate:(id)a10 activeDeviceIdentifier:(id)a11 estimatedEndDate:(id)a12 coarseEstimatedEndDate:(id)a13 estimatedEndDateStatus:(unsigned long long)a14 sessionEndReason:(unsigned long long)a15 sessionStateTransitionDate:(id)a16 activePairedDeviceIdentifier:(id)a17;
- (BOOL)isEndSessionState;
- (BOOL)isPromptState;
- (BOOL)isTimerExtensionValid:(double)a0;
- (BOOL)isValidState;
- (id)initWithSessionState:(unsigned long long)a0 configuration:(id)a1 userTriggerResponse:(long long)a2 monitorContext:(id)a3 allowReadToken:(id)a4 safetyCacheKey:(id)a5 startMessageGUID:(id)a6 scheduledSendMessageGUID:(id)a7 scheduledSendMessageDate:(id)a8 activeDeviceIdentifier:(id)a9 estimatedEndDate:(id)a10 coarseEstimatedEndDate:(id)a11 estimatedEndDateStatus:(unsigned long long)a12 sessionEndReason:(unsigned long long)a13 activePairedDeviceIdentifier:(id)a14;
- (BOOL)isCacheReleasedState;

@end
