@class NSString, NSNumber;

@interface CLMiLoPredictionDeviceDistanceIndication : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSNumber *uwbRange;
@property (readonly, nonatomic) NSNumber *bleRSSI;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceIdentifier:(id)a0 uwbRange:(id)a1 bleRSSI:(id)a2;

@end
