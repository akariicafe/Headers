@class NSString, NSURL, CLLocation, NSNumber;

@interface FKApplePayTransactionInsight : NSObject <NSCopying>

@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *merchantRawName;
@property (copy, nonatomic) NSString *industryCategory;
@property (copy, nonatomic) NSNumber *industryCode;
@property (copy, nonatomic) NSString *merchantType;
@property (copy, nonatomic) NSString *merchantCountryCode;
@property (copy, nonatomic) NSString *terminalIdentifier;
@property (copy, nonatomic) NSString *merchantAdditionalData;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSNumber *isCoarseLocation;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *merchantRawCANL;
@property (copy, nonatomic) NSString *merchantRawCity;
@property (copy, nonatomic) NSString *merchantRawState;
@property (copy, nonatomic) NSString *merchantRawCountry;
@property (copy, nonatomic) NSString *merchantCity;
@property (copy, nonatomic) NSString *merchantZip;
@property (copy, nonatomic) NSString *merchantState;
@property (copy, nonatomic) NSNumber *merchantCleanConfidenceLevel;
@property (copy, nonatomic) NSNumber *adamIdentifier;
@property (copy, nonatomic) NSURL *webURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMerchantName:(id)a0 merchantRawName:(id)a1 industryCategory:(id)a2 industryCode:(id)a3 merchantType:(id)a4 merchantCountryCode:(id)a5 terminalIdentifier:(id)a6 merchantAdditionalData:(id)a7 paymentNetwork:(id)a8 isCoarseLocation:(id)a9 location:(id)a10 merchantIdentifier:(id)a11 merchantRawCANL:(id)a12 merchantRawCity:(id)a13 merchantRawState:(id)a14 merchantRawCountry:(id)a15 merchantCity:(id)a16 merchantZip:(id)a17 merchantState:(id)a18 merchantCleanConfidenceLevel:(id)a19 adamIdentifier:(id)a20 webURL:(id)a21 webMerchantIdentifier:(id)a22 webMerchantName:(id)a23;

@end
