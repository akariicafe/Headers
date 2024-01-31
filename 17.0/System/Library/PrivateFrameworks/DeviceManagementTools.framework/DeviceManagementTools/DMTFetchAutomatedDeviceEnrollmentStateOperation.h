@protocol DMTEnrollmentStateProviding;

@interface DMTFetchAutomatedDeviceEnrollmentStateOperation : DMTTaskOperation

@property (readonly, nonatomic) id<DMTEnrollmentStateProviding> enrollmentStateProvider;

+ (BOOL)validateRequest:(id)a0 error:(id *)a1;

- (id)initWithRequest:(id)a0 enrollmentStateProvider:(id)a1;
- (void)runWithRequest:(id)a0;
- (void).cxx_destruct;

@end
