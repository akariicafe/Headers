@class NSDecimalNumber, NSString, NSArray, NSDictionary, PKPaymentDigitalIssuanceMetadata;

@interface PKPaymentProvisioningMethodMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *productIdentifier;
@property (readonly, copy, nonatomic) NSString *currency;
@property (readonly, nonatomic) unsigned long long depositType;
@property (readonly, copy, nonatomic) NSDecimalNumber *depositAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *minLoadedBalance;
@property (readonly, copy, nonatomic) NSDecimalNumber *maxLoadedBalance;
@property (readonly, copy, nonatomic) NSArray *requiredFields;
@property (readonly, copy, nonatomic) NSDictionary *readerModeMetadata;
@property (readonly, nonatomic) PKPaymentDigitalIssuanceMetadata *digitalIssuanceMetadata;
@property (readonly, copy, nonatomic) NSDictionary *readerModeResources;
@property (readonly, copy, nonatomic) NSDecimalNumber *minimumReaderModeBalance;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
