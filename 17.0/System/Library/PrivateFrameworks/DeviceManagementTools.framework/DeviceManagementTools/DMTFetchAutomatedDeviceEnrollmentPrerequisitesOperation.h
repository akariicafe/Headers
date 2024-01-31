@protocol DMTDeviceInformationPrimitives;

@interface DMTFetchAutomatedDeviceEnrollmentPrerequisitesOperation : DMTTaskOperation

@property (readonly, nonatomic) id<DMTDeviceInformationPrimitives> deviceInformationPrimitives;

+ (BOOL)validateRequest:(id)a0 error:(id *)a1;

- (void)runWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 deviceInformationPrimitives:(id)a1;

@end
