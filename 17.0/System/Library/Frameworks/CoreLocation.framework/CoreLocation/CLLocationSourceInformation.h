@interface CLLocationSourceInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isSimulatedBySoftware;
@property (readonly, nonatomic) BOOL isProducedByAccessory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSoftwareSimulationState:(BOOL)a0 andExternalAccessoryState:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
