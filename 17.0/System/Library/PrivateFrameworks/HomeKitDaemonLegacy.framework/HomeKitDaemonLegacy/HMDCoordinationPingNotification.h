@class NSUUID;

@interface HMDCoordinationPingNotification : COMeshNotification

@property (readonly) NSUUID *primaryResidentUUID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPrimaryResidentUUID:(id)a0;

@end
