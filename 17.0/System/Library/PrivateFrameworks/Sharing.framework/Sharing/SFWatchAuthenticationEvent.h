@class NSString, NSDictionary;

@interface SFWatchAuthenticationEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic) BOOL succeeded;
@property (nonatomic) unsigned int failureReason;
@property (nonatomic) BOOL screenOn;
@property (nonatomic) double discoveryDuration;
@property (nonatomic) double keyExchangeDuration;
@property (nonatomic) double awdlBringUpDuration;
@property (nonatomic) double rangingDuration;
@property (nonatomic) double peerFoundDuration;
@property (nonatomic) double totalDuration;
@property (nonatomic) double timeSinceBoot;
@property (nonatomic) double timeSinceRemoteUnlocked;
@property (copy, nonatomic) NSString *watchHardwareModel;
@property (copy, nonatomic) NSString *watchSoftwareVersion;
@property (copy, nonatomic) NSString *remoteHardwareModel;
@property (copy, nonatomic) NSString *remoteSoftwareVersion;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitEvent;

@end
