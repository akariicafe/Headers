@class NSString;

@interface DMTEnrollmentCompletionViewModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic) BOOL hasVerboseDescription;
@property (readonly, copy, nonatomic) NSString *verboseDescriptionText;
@property (readonly, copy, nonatomic) NSString *linkButtonTitle;
@property (readonly, copy, nonatomic) NSString *buttonTitle;

+ (id)linkButtonTitle;
+ (id)verboseDescriptionTextForError:(id)a0;
+ (id)detailTextForEnrollmentFailureWithLocalizedDeviceClass:(id)a0;
+ (id)detailTextForSuccessfulEnrollmentWithLocalizedDeviceClass:(id)a0 organizationName:(id)a1 organizationType:(long long)a2 mdmServerName:(id)a3;
+ (id)symbolNameForEnrollmentFailure;
+ (id)symbolNameForSuccessfulEnrollment;
+ (id)titleForEnrollmentFailureWithLocalizedDeviceClass:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initForEnrollmentFailureWithError:(id)a0 localizedDeviceClass:(id)a1;
- (id)initSuccessfulEnrollmentInOrganizationName:(id)a0 organizationType:(long long)a1 mdmServerName:(id)a2 localizedDeviceClass:(id)a3;

@end
