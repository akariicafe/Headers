@class NSString, NSData, NSDate;

@interface PKBarcodePaymentEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long eventType;
@property (copy, nonatomic) NSString *barcodeIdentifier;
@property (nonatomic) BOOL biometricsChanged;
@property (nonatomic) long long authenticationType;
@property (copy, nonatomic) NSString *deviceAccountIdentifier;
@property (copy, nonatomic) NSData *eventMetadata;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToBarcodePaymentEvent:(id)a0;

@end
