@class NSString;

@interface DACarKeyPrivateCrossPlatformSharingData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *vehicleEnteredPasscode;
@property (readonly, nonatomic) NSString *pairedEntityIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVehicleEnteredPasscode:(id)a0 pairedEntityIdentifier:(id)a1;

@end
