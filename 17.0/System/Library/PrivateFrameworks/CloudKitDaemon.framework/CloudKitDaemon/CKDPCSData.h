@class NSString, NSData;
@protocol NSSecureCoding;

@interface CKDPCSData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *pcsKeyID;
@property (readonly, nonatomic) id<NSSecureCoding> itemID;
@property (nonatomic) struct _OpaquePCSShareProtection { } *pcs;
@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSData *pcsData;

- (id)initWithPCSData:(id)a0;
- (BOOL)shouldEncodePCSData;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
