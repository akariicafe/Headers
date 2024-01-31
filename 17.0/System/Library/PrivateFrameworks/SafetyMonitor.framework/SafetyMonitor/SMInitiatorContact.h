@class RTLocation, NSString, SMHandle, NSData, NSDate, SMCache, SMLocation;

@interface SMInitiatorContact : SMContact

@property (retain, nonatomic) SMHandle *receiverHandle;
@property (copy, nonatomic) NSDate *shouldBeCleanedUpDate;
@property (retain, nonatomic) NSDate *keyReleaseMessageSendDate;
@property (nonatomic) BOOL cloudkitShareZoneCleanedUpSuccessfully;
@property (copy, nonatomic) NSDate *scheduledSendExpiryDate;
@property (copy, nonatomic) NSString *scheduleSendMessageGUID;
@property (retain, nonatomic) SMLocation *unlockLocation;
@property (retain, nonatomic) SMLocation *lockLocation;
@property (retain, nonatomic) SMLocation *startingLocation;
@property (retain, nonatomic) SMLocation *offWristLocation;
@property (retain, nonatomic) SMLocation *parkedCarLocation;
@property (copy, nonatomic) NSData *destinationMapItem;
@property (retain, nonatomic) SMCache *cache;
@property (copy, nonatomic) NSDate *timeCacheUploadCompletion;
@property (retain, nonatomic) RTLocation *locationOfTrigger;
@property (copy, nonatomic) NSDate *triggerDate;
@property (copy, nonatomic) NSDate *cacheUpdateBackstopExpiryDate;
@property (nonatomic) double maxCacheSize;
@property (nonatomic) long long maxLocationsInTrace;
@property (nonatomic) double maxTimeBetweenCacheUpdates;
@property (nonatomic) long long numCacheUpdates;
@property (nonatomic) double timeTilCacheRelease;
@property (nonatomic) long long numberOfSuccessfulCacheUpdates;
@property (nonatomic) long long numberOfMessageCancelling;
@property (nonatomic) long long numberOfSuccessfulMessageCancelling;
@property (nonatomic) long long numberOfMessageScheduling;
@property (nonatomic) long long numberOfSuccessfulMessageScheduling;
@property (nonatomic) BOOL wasCacheReleased;
@property (nonatomic) BOOL wasScheduledSendTriggered;
@property (nonatomic) BOOL lockState;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 receiverHandle:(id)a1 shouldBeCleanedUpDate:(id)a2 cloudkitShareZoneCleanedUpSuccessfully:(BOOL)a3 syncDate:(id)a4 keyReleaseMessageSendDate:(id)a5 scheduledSendExpiryDate:(id)a6 cache:(id)a7 sessionID:(id)a8 safetyCacheKey:(id)a9 allowReadToken:(id)a10 scheduleSendMessageGUID:(id)a11 unlockLocation:(id)a12 lockLocation:(id)a13 startingLocation:(id)a14 offWristLocation:(id)a15 parkedCarLocation:(id)a16 destinationMapItem:(id)a17 timeCacheUploadCompletion:(id)a18 maxCacheSize:(double)a19 maxLocationsInTrace:(long long)a20 maxTimeBetweenCacheUpdates:(double)a21 numCacheUpdates:(long long)a22 timeTilCacheRelease:(double)a23 numberOfSuccessfulCacheUpdates:(long long)a24 numberOfMessageCancelling:(long long)a25 numberOfSuccessfulMessageCancelling:(long long)a26 numberOfMessageScheduling:(long long)a27 numberOfSuccessfulMessageScheduling:(long long)a28 wasCacheReleased:(BOOL)a29 wasScheduledSendTriggered:(BOOL)a30 locationOfTrigger:(id)a31 triggerDate:(id)a32 lockState:(BOOL)a33 cacheUpdateBackstopExpiryDate:(id)a34;

@end
