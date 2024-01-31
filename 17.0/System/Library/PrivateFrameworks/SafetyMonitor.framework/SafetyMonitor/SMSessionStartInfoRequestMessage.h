@class NSString;

@interface SMSessionStartInfoRequestMessage : SMMessage

@property (readonly, nonatomic) NSString *receiverHandle;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)messageType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)outputToDictionary;
- (id)initWithSessionID:(id)a0 receiverHandle:(id)a1;
- (id)initWithDate:(id)a0 messageID:(id)a1 sessionID:(id)a2 receiverHandle:(id)a3;

@end
