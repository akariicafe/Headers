@class NSNumber, NSValue, NSUUID;

@interface OZARPlaneInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *alignment;
@property (retain, nonatomic) NSNumber *classification;
@property (retain, nonatomic) NSValue *extent;
@property (retain, nonatomic) NSValue *center;
@property (retain, nonatomic) NSValue *transform;
@property (retain, nonatomic) NSUUID *identifier;

+ (id)planeListWithARFrame:(id)a0;
+ (id)planeListWithAnchors:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithARPlaneAnchor:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })simdTransform;

@end
