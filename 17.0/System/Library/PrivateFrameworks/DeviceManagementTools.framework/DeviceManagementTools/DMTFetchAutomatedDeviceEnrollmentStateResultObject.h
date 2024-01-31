@interface DMTFetchAutomatedDeviceEnrollmentStateResultObject : CATTaskResultObject

@property (nonatomic) long long enrollmentState;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
