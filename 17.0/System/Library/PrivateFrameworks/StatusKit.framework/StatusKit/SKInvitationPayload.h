@class NSDictionary, NSData, NSDate;

@interface SKInvitationPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *payloadDictionary;
@property (retain, nonatomic) NSDictionary *cachedPayloadDictionary;
@property (readonly, nonatomic) NSData *payloadData;
@property (readonly, nonatomic) NSDate *dateCreated;

+ (id)logger;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 dateCreated:(id)a1;
- (id)initWithData:(id)a0 dateCreated:(id)a1;

@end
