@class NSString, NSDictionary;

@interface SFPairedUnlockEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) BOOL succeeded;
@property (nonatomic) unsigned short failureReason;
@property (nonatomic) unsigned short attemptHourLocal;
@property (nonatomic) BOOL phoneAutoUnlockEnabled;
@property (nonatomic) BOOL canRelock;
@property (nonatomic) BOOL relockedWatch;
@property (nonatomic) NSString *bannerDismissReason;
@property (nonatomic) long long bannerDismissalCount;
@property (nonatomic) long long phoneState;
@property (nonatomic) BOOL usingEscrowRecord;
@property (nonatomic) BOOL retriedWithEscrowRecord;
@property (copy, nonatomic) NSString *watchHardwareModel;
@property (copy, nonatomic) NSString *watchSoftwareVersion;
@property (nonatomic) unsigned int keyExchangeDuration;
@property (nonatomic) unsigned int pillDelay;
@property (nonatomic) unsigned int confirmationDuration;
@property (nonatomic) unsigned int totalUnlockProcessDuration;
@property (nonatomic) unsigned int totalUnlockDuration;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitEvent;

@end
