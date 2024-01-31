@class NSString, NSArray, NSURL, NSDate, NSData;

@interface PKAppleBalanceInStoreTopUpToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long tokenType;
@property (copy, nonatomic) NSString *tokenIdentifier;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSURL *termsURL;
@property (copy, nonatomic) NSArray *certificateChain;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSData *signature;

- (unsigned long long)hash;
- (BOOL)isExpired;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)displayableToken;
- (id)initWithDictionary:(id)a0 accountIdentifier:(id)a1;

@end
