@class NSString, NSData, NSDate;

@interface APSAppTokenInfo : NSObject <APSTokenInfo, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isUnextended;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) NSData *baseToken;
@property (readonly, nonatomic) NSData *vapidPublicKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initUnextendedAppTokenWithTopic:(id)a0 identifier:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithTopic:(id)a0 identifier:(id)a1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
