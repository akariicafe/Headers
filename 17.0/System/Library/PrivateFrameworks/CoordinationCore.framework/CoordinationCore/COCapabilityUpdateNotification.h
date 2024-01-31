@class NSSet;

@interface COCapabilityUpdateNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSSet *capabilities;

+ (BOOL)supportsSecureCoding;

- (id)initWithCapabilities:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
