@class NSData;

@interface SMSessionEndMessage : SMMessage

@property (readonly, nonatomic) unsigned long long sessionEndReason;
@property (readonly, nonatomic) unsigned long long sessionType;
@property (readonly, nonatomic) unsigned long long destinationType;
@property (readonly, nonatomic) NSData *destinationMapItem;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;
+ (unsigned long long)sessionEndReasonFromDict:(id)a0;
+ (unsigned long long)sessionEndReasonFromURL:(id)a0;

- (id)initWithURL:(id)a0;
- (id)summaryText;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)outputToDictionary;
- (id)initWithSessionID:(id)a0 sessionEndReason:(unsigned long long)a1 sessionType:(unsigned long long)a2 destinationType:(unsigned long long)a3 destinationMapItem:(id)a4;
- (id)outputToURLComponents;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 sessionEndReason:(unsigned long long)a3;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 sessionEndReason:(unsigned long long)a3 sessionType:(unsigned long long)a4 destinationType:(unsigned long long)a5;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 sessionEndReason:(unsigned long long)a3 sessionType:(unsigned long long)a4 destinationType:(unsigned long long)a5 destinationMapItem:(id)a6;

@end
