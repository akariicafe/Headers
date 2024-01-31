@class NSString, NSDate;

@interface BCSShardItem : NSObject <BCSShardItemProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *base64EncodedString;
@property (nonatomic) long long type;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long shardCount;
@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBase64EncodedString:(id)a0 shardType:(long long)a1 startIndex:(long long)a2 shardCount:(long long)a3 expirationDate:(id)a4;

@end
