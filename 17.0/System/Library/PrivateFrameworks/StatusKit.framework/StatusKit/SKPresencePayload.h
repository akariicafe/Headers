@class NSDictionary, NSData;

@interface SKPresencePayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *payloadDictionary;
@property (retain, nonatomic) NSDictionary *cachedPayloadDictionary;
@property (readonly, nonatomic) NSData *payloadData;

+ (id)logger;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
