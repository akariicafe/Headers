@class NSUUID, SMHandle, NSData, NSDate, RTLocation, NSString;

@interface SMReceiverSessionStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *lastUpdateDate;
@property (copy, nonatomic) NSUUID *sessionID;
@property (copy, nonatomic) SMHandle *initiatorHandle;
@property (nonatomic) long long sessionState;
@property (nonatomic) BOOL zoneShareAccepted;
@property (nonatomic) unsigned long long sessionType;
@property (copy, nonatomic) NSDate *sessionStartDate;
@property (copy, nonatomic) NSDate *estimatedEndDate;
@property (copy, nonatomic) NSDate *coarseEstimatedEndDate;
@property (nonatomic) unsigned long long destinationType;
@property (copy, nonatomic) NSData *destinationMapItem;
@property (copy, nonatomic) NSDate *triggerDate;
@property (copy, nonatomic) RTLocation *locationOfTrigger;
@property (nonatomic) unsigned long long triggerType;
@property (copy, nonatomic) NSDate *cacheRequestDate;
@property (nonatomic) unsigned long long sessionEndReason;
@property (copy, nonatomic) NSDate *cacheExpiryDate;
@property (copy, nonatomic) NSDate *lastSessionStartInfoRequestDate;
@property (nonatomic) long long sessionStartInfoRequestCount;
@property (copy, nonatomic) NSDate *lastKeyReleaseInfoRequestDate;
@property (nonatomic) long long keyReleaseInfoRequestCount;
@property (nonatomic) BOOL isSOSTrigger;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSString *receiverHandle;

+ (id)convertSessionStateToString:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)outputToDictionary;
- (id)initWithIdentifier:(id)a0 sessionID:(id)a1 initiatorHandle:(id)a2;
- (BOOL)isSessionOngoing;

@end
