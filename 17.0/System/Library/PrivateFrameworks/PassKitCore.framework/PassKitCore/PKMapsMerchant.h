@class CLLocation, NSString, NSURL, CNPostalAddress, NSDate, MKWalletMerchantStylingInfo;

@interface PKMapsMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) int resultProviderIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic, setter=setURL:) NSURL *url;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (copy, nonatomic) CNPostalAddress *postalAddress;
@property (copy, nonatomic) NSURL *heroImageURL;
@property (copy, nonatomic) NSString *heroImageAttributionName;
@property (nonatomic) long long category;
@property (copy, nonatomic) NSString *detailedCategory;
@property (retain, nonatomic) MKWalletMerchantStylingInfo *stylingInfo;
@property (copy, nonatomic) NSURL *businessChatURL;
@property (copy, nonatomic) NSDate *lastProcessedDate;
@property (copy, nonatomic) CLLocation *location;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (void)_deleteDeviceDataFromCloudStoreRecord:(id)a0;
+ (id)recordNamePrefix;
+ (void)deleteFromCloudStoreRecord:(id)a0 codingType:(unsigned long long)a1;

- (unsigned long long)itemType;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)primaryIdentifier;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_jsonEncodedPostalAddressString;
- (void)_encodeDeviceDataForCloudStoreCoder:(id)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (BOOL)hasCloudArchivableDeviceData;
- (id)initWithCloudStoreCoder:(id)a0;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)a0;
- (BOOL)isEqualToMapsMerchant:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;

@end
