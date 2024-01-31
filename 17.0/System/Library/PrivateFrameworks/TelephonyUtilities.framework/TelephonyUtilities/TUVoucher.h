@class NSData, TUHandle, NSString;

@interface TUVoucher : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *encryptedData;
@property (readonly, copy, nonatomic) NSData *unsafeData;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *tokenPrefixedURI;

+ (id)voucherFromMessagingData:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)messagingData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHandle:(id)a0 tokenPrefixedURI:(id)a1 data:(id)a2 encryptedData:(id)a3;
- (id)initWithVoucher:(id)a0;
- (BOOL)isEqualToVoucher:(id)a0;

@end
