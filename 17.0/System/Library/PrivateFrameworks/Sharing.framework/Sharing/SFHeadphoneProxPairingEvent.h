@class NSString, NSDictionary;

@interface SFHeadphoneProxPairingEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) long long errorCode;
@property (nonatomic) BOOL attemptedPairing;
@property (nonatomic) long long pairingType;
@property (nonatomic) double pairingDuration;
@property (nonatomic) double foundToFirstCardDuration;
@property (nonatomic) double triggerToFirstCardDuration;
@property (nonatomic) double assetFetchDuration;
@property (nonatomic) unsigned char color;
@property (nonatomic) unsigned int productID;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitEvent;

@end
