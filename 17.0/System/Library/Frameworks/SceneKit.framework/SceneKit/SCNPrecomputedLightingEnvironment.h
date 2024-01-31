@class NSData;

@interface SCNPrecomputedLightingEnvironment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *radianceData;
@property (retain, nonatomic) NSData *irradianceData;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
