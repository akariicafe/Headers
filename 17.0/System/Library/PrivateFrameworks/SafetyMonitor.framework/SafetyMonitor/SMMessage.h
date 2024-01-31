@class NSUUID, NSString, NSDate;

@interface SMMessage : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) unsigned long long messageType;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long interfaceVersion;
@property (copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSUUID *messageID;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) NSString *summaryText;

+ (unsigned long long)messageTypeFromURL:(id)a0;
+ (id)createMessageFromDict:(id)a0;
+ (id)createMessageFromURL:(id)a0;
+ (unsigned long long)interfaceTypeFromMessageType:(unsigned long long)a0;
+ (id)messageIDFromURL:(id)a0;
+ (unsigned long long)messageTypeFromDict:(id)a0;
+ (id)sessionIDFromURL:(id)a0;
+ (id)messageIDFromDict:(id)a0;
+ (id)sessionIDFromDict:(id)a0;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionID:(id)a0;
- (id)outputToDictionary;
- (id)outputToURLComponents;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2;

@end
