@class NSString, NSNumber, NSMutableDictionary;
@protocol HKOrganDonationRegistrantDelegate;

@interface HKOrganDonationRegistrant : NSObject <HKSimpleDataEntryItemDelegate, NSCopying, NSSecureCoding> {
    NSMutableDictionary *_dataEntryItems;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<HKOrganDonationRegistrantDelegate> delegate;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *firstname;
@property (retain, nonatomic) NSString *middlename;
@property (retain, nonatomic) NSString *lastname;
@property (retain, nonatomic) NSString *address1;
@property (retain, nonatomic) NSString *address2;
@property (retain, nonatomic) NSString *zip;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *last4SSN;
@property (retain, nonatomic) NSString *sex;
@property (retain, nonatomic) NSString *dob;
@property (readonly, nonatomic) NSNumber *age;
@property (readonly, nonatomic) BOOL hasEdits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_importNumberFormatter;
+ (BOOL)_isNumericStringValid:(id)a0 withLength:(long long)a1;
+ (void)_loadStateInformationIfNeeded;
+ (id)convertLocalizedNumericStringToLatin:(id)a0 withNumberFormatter:(id)a1;
+ (id)exportDateFormatter;
+ (id)organDonationRegistrantWithDemographicsInformation:(id)a0;
+ (id)organDonationRegistrantWithJSONDictionary:(id)a0;
+ (id)ssnNumberFormatter;
+ (id)zipcodeNumberFormatter;

- (id)jsonDictionaryRepresentation;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addDataEntryItemIntoArray:(id)a0 validOnly:(BOOL)a1 forField:(long long)a2;
- (id)_createDateOfBirthEntryItem;
- (unsigned long long)_placeHolderTypeForField:(long long)a0;
- (id)_stateChoiceDisplayNames;
- (id)_stateChoiceValues;
- (id)_todayBirthdayDateComponents;
- (void)dataEntryItemDidUpdateValue:(id)a0;
- (id)dataEntryItemForRegistrantField:(long long)a0;
- (id)dataEntryItemsValidOnly:(BOOL)a0;
- (BOOL)isFieldValid:(long long)a0;
- (BOOL)isRegistrantValid;

@end
