@class NSString, NSNumber, NSDictionary;

@interface IDSRegistrationPhoneNumberValidationFinishedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) unsigned int registrationError;
@property (readonly, nonatomic) NSNumber *validationDuration;
@property (readonly, nonatomic) NSNumber *numberOfSMSSent;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 registrationError:(unsigned int)a1 validationDuration:(id)a2 numberOfSMSSent:(id)a3;

@end
