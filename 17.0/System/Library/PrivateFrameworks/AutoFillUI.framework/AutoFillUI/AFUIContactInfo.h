@class NSString;

@interface AFUIContactInfo : NSObject

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *nameString;
@property (copy, nonatomic) NSString *givenNameString;
@property (copy, nonatomic) NSString *familyNameString;
@property (copy, nonatomic) NSString *middleNameString;
@property (copy, nonatomic) NSString *namePrefixString;
@property (copy, nonatomic) NSString *nameSuffixString;
@property (copy, nonatomic) NSString *nicknameString;
@property (copy, nonatomic) NSString *jobTitleString;
@property (copy, nonatomic) NSString *organizationNameString;
@property (copy, nonatomic) NSString *birthdateString;
@property (copy, nonatomic) NSString *birthdateDayString;
@property (copy, nonatomic) NSString *birthdateMonthString;
@property (copy, nonatomic) NSString *birthdateYearString;
@property (copy, nonatomic) NSString *phoneString;
@property (copy, nonatomic) NSString *phoneNationalNumberString;
@property (copy, nonatomic) NSString *phoneCountryCodeString;
@property (copy, nonatomic) NSString *phoneAreaCodeString;
@property (copy, nonatomic) NSString *phoneLocalNumberString;
@property (copy, nonatomic) NSString *phoneExtensionString;
@property (copy, nonatomic) NSString *emailString;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *fullStreetAddressString;
@property (copy, nonatomic) NSString *streetAddressLine1String;
@property (copy, nonatomic) NSString *streetAddressLine2String;
@property (copy, nonatomic) NSString *sublocalityString;
@property (copy, nonatomic) NSString *cityString;
@property (copy, nonatomic) NSString *stateString;
@property (copy, nonatomic) NSString *postalCodeString;
@property (copy, nonatomic) NSString *countryString;

+ (id)symbolNameForLabel:(id)a0;

- (id)titleText;
- (id)initWithLabel:(id)a0;
- (void).cxx_destruct;
- (id)subtitleTextForAutoFillContext:(id)a0;
- (id)customInfoFromContactInfo;
- (id)propertyForTextContentType:(id)a0;

@end
