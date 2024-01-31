@class ARParametricLights, NSSet, NSData, NSUUID;
@protocol MTLTexture;

@interface AREnvironmentProbeAnchor : ARAnchor

@property (retain, nonatomic) id<MTLTexture> environmentTexture;
@property (nonatomic) float clippingPointLux;
@property (retain, nonatomic) ARParametricLights *parametricLights;
@property (retain, nonatomic) NSSet *sourceKeyframeUUIDs;
@property (retain, nonatomic) NSData *colorHistogram;
@property (nonatomic) float opaquePixelPercentage;
@property (retain, nonatomic) NSUUID *trackedPlaneIdentifier;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ extent;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)initWithAnchor:(id)a0;
- (id)initWithTransform:(SEL)a0 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithIdentifier:(id)a0 onPlane:(struct ARTexturedPlane { struct array<unsigned char, 16UL> { unsigned char x0[16]; } x0; unsigned long long x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; struct array<float __attribute__((ext_vector_type(3))), 4UL> { void /* unknown type, empty encoding */ x0[4]; } x3; struct set<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> { struct __tree<std::array<unsigned char, 16>, std::less<std::array<unsigned char, 16>>, std::allocator<std::array<unsigned char, 16>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::array<unsigned char, 16>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<std::array<unsigned char, 16>>> { unsigned long long x0; } x2; } x0; } x4; id x5; })a1;
- (id)initWithIdentifier:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithIdentifier:(SEL)a0 transform:(id)a1 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (id)initWithName:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithName:(SEL)a0 transform:(id)a1 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;

@end
