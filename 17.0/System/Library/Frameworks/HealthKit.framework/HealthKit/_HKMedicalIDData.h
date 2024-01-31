@class HKQuantity, NSString, NSArray, NSData, NSDate, NSDateComponents, NSNumber;

@interface _HKMedicalIDData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *birthdate;
@property (retain, nonatomic) NSDate *gmtBirthdate;
@property (retain, nonatomic) NSDate *legacyDateSaved;
@property (nonatomic) long long schemaVersion;
@property (retain, nonatomic) NSDate *isDisabledModifiedDate;
@property (retain, nonatomic) NSDate *shareDuringEmergencyModifiedDate;
@property (retain, nonatomic) NSDate *pictureDataModifiedDate;
@property (retain, nonatomic) NSDate *nameModifiedDate;
@property (retain, nonatomic) NSDate *gregorianBirthdayModifiedDate;
@property (retain, nonatomic) NSDate *primaryLanguageCodeModifiedDate;
@property (retain, nonatomic) NSDate *heightModifiedDate;
@property (retain, nonatomic) NSDate *weightModifiedDate;
@property (retain, nonatomic) NSDate *bloodTypeModifiedDate;
@property (retain, nonatomic) NSDate *isOrganDonorModifiedDate;
@property (retain, nonatomic) NSDate *emergencyContactsModifiedDate;
@property (retain, nonatomic) NSDate *clinicalContactsModifiedDate;
@property (retain, nonatomic) NSDate *medicalConditionsModifiedDate;
@property (retain, nonatomic) NSDate *medicalNotesModifiedDate;
@property (retain, nonatomic) NSDate *allergyInfoModifiedDate;
@property (retain, nonatomic) NSDate *medicationInfoModifiedDate;
@property (retain, nonatomic) NSDate *dateSaved;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL shareDuringEmergency;
@property (copy, nonatomic) NSData *pictureData;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDateComponents *gregorianBirthday;
@property (copy, nonatomic) NSString *primaryLanguageCode;
@property (retain, nonatomic) HKQuantity *height;
@property (retain, nonatomic) HKQuantity *weight;
@property (nonatomic) long long bloodType;
@property (retain, nonatomic) NSNumber *isOrganDonor;
@property (copy, nonatomic) NSArray *emergencyContacts;
@property (copy, nonatomic) NSArray *clinicalContacts;
@property (copy, nonatomic) NSString *medicalConditions;
@property (copy, nonatomic) NSString *medicalNotes;
@property (copy, nonatomic) NSString *allergyInfo;
@property (copy, nonatomic) NSString *medicationInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)merge:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)_gregorianUtcCalendar;
- (id)consolidatedSOSContactsWithSOSContactsManager:(id)a0;
- (BOOL)hasAnyData;
- (BOOL)hasAnyModificationDate;
- (BOOL)isEqualToSyncedData:(id)a0;
- (void)setModificationDatesForUpdatedFieldsWithMedicalIDData:(id)a0;
- (void)setModificationDatesToCurrentDate;

@end
