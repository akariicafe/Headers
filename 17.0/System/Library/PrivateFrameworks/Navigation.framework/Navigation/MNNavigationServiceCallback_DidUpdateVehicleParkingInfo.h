@class MNVehicleParkingInfo;

@interface MNNavigationServiceCallback_DidUpdateVehicleParkingInfo : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNVehicleParkingInfo *vehicleParkingInfo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;

@end
