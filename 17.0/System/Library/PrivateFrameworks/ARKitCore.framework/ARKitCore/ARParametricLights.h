@class NSArray;

@interface ARParametricLights : NSObject <ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void /* unknown type, empty encoding */ ambientColor;
@property (readonly, nonatomic) NSArray *areaLights;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAmbientColor:(SEL)a0 areaLights:(id)a1;

@end
