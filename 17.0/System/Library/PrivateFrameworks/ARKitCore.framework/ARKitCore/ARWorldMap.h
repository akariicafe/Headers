@class NSData, NSArray, ARPointCloud;

@interface ARWorldMap : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSData *trackingData;
@property (copy, nonatomic) NSData *surfaceData;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } referenceOriginTransform;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ center;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ extent;
@property (copy, nonatomic) NSArray *anchors;
@property (readonly, nonatomic) ARPointCloud *rawFeaturePoints;

+ (struct { })boundsForTrackingData:(id)a0;
+ (id)featurePointsForTrackingData:(id)a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
+ (id)keyframesForTrackingData:(id)a0 withFeaturePoints:(id)a1 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)extractReferenceObjectWithTransform:(id)a0 center:(SEL)a1 extent:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 error:(id *)a3;
- (id)initWithTrackingData:(id)a0 referenceOriginTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
