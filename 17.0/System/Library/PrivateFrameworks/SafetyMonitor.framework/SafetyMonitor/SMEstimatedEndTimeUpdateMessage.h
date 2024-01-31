@class NSDate;

@interface SMEstimatedEndTimeUpdateMessage : SMMessage

@property (readonly, nonatomic) NSDate *estimatedEndTime;
@property (readonly, nonatomic) NSDate *coarseEstimatedEndTime;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)outputToDictionary;
- (id)initWithSessionID:(id)a0 estimatedEndTime:(id)a1 coarseEstimatedEndTime:(id)a2;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 estimatedEndTime:(id)a3;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 estimatedEndTime:(id)a3 coarseEstimatedEndTime:(id)a4;

@end
