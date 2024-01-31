@class NSString, NSDictionary, NSArray, DIAttribute;
@protocol NSObject, NSCopying;

@interface PKPaymentSetupField : NSObject <NSCopying>

@property (copy, nonatomic) NSString *localizedPlaceholder;
@property (copy, nonatomic) NSString *displayFormat;
@property (nonatomic, getter=isOptional) BOOL optional;
@property (copy, nonatomic) NSString *submissionKey;
@property (copy, nonatomic) NSString *submissionDestination;
@property (nonatomic) BOOL requiresSecureSubmission;
@property (readonly, copy, nonatomic) NSDictionary *rawConfigurationDictionary;
@property (readonly, nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (copy, nonatomic) NSString *defaultValue;
@property (nonatomic) BOOL populateFromMeCard;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (retain, nonatomic) DIAttribute *attribute;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long fieldType;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *compactLocalizedDisplayName;
@property (copy, nonatomic) id<NSObject, NSCopying> currentValue;
@property (copy, nonatomic) id<NSObject, NSCopying> originalCameraCaptureValue;
@property (nonatomic, getter=isCurrentValueFromCameraCapture) BOOL currentValueFromCameraCapture;
@property (readonly, copy, nonatomic) NSString *odiAttribute;
@property (readonly, copy, nonatomic) NSArray *requirements;

+ (Class)classForIdentifier:(id)a0 type:(unsigned long long)a1;
+ (id)newRandomlyGeneratedField;
+ (id)paymentSetupFieldWithDIAttribute:(id)a0;
+ (id)paymentSetupFieldWithIdentifier:(id)a0;
+ (id)paymentSetupFieldWithIdentifier:(id)a0 configuration:(id)a1;
+ (id)paymentSetupFieldWithIdentifier:(id)a0 type:(unsigned long long)a1;
+ (id)sampleCustomPaymentSetupFields;

- (id)displayString;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isFieldTypeDate;
- (id)textFieldObject;
- (id)dateFieldObject;
- (BOOL)isFieldTypeText;
- (void)_setLocalizedDisplayName:(id)a0;
- (BOOL)_shouldStripDiacritics;
- (id)_submissionStringForValue:(id)a0;
- (id)footerFieldObject;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1;
- (BOOL)isFieldTypeFooter;
- (BOOL)isFieldTypeLabel;
- (BOOL)isFieldTypePicker;
- (id)labelFieldObject;
- (void)noteCurrentValueChanged;
- (id)pickerFieldObject;
- (BOOL)preventVoiceOver;
- (id)submissionString;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)updateWithAttribute:(id)a0;
- (void)updateWithConfiguration:(id)a0;

@end
