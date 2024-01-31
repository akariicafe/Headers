@class NSDictionary, NSData, NSDate;

@interface SMSessionStartMessage : SMMessage

@property (readonly, nonatomic) NSDictionary *invitationTokenDict;
@property (readonly, nonatomic) unsigned long long sessionType;
@property (readonly, nonatomic) NSDate *estimatedEndTime;
@property (readonly, nonatomic) NSDate *coarseEstimatedEndTime;
@property (readonly, nonatomic) unsigned long long destinationType;
@property (readonly, nonatomic) NSData *destinationMapItem;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;

- (id)initWithURL:(id)a0;
- (id)summaryText;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)outputToDictionary;
- (id)initWithSessionID:(id)a0 invitationTokenDict:(id)a1 sessionType:(unsigned long long)a2 estimatedEndTime:(id)a3 coarseEstimatedEndTime:(id)a4 destinationType:(unsigned long long)a5 destinationMapItem:(id)a6;
- (id)outputToURLComponents;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 invitationToken:(id)a3 sessionType:(unsigned long long)a4 estimatedEndTime:(id)a5 coarseEstimatedEndTime:(id)a6 destinationType:(unsigned long long)a7 destinationMapItem:(id)a8;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 invitationTokenDict:(id)a3 sessionType:(unsigned long long)a4 estimatedEndTime:(id)a5 coarseEstimatedEndTime:(id)a6 destinationType:(unsigned long long)a7 destinationMapItem:(id)a8;

@end
