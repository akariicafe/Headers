@protocol DMTEnrollmentInitiating, DMTEnrollmentPrerequisiteReceiving;

@interface DMTPerformAutomatedDeviceEnrollmentOperation : DMTTaskOperation

@property (readonly, nonatomic) id<DMTEnrollmentPrerequisiteReceiving> prerequisiteReceiver;
@property (readonly, nonatomic) id<DMTEnrollmentInitiating> enrollmentInitiator;

+ (BOOL)validateRequest:(id)a0 error:(id *)a1;

- (void)runWithRequest:(id)a0;
- (id)initWithRequest:(id)a0 prerequisiteReceiver:(id)a1 enrollmentInitiator:(id)a2;
- (void).cxx_destruct;

@end
