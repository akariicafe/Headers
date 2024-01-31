@class ARReferenceImage;

@interface ARImageDetectionResult : NSObject <NSCopying>

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } visionTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (nonatomic) double estimatedScaleFactor;
@property (retain, nonatomic) ARReferenceImage *referenceImage;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } worldTrackingCameraTransformAtDetection;
@property (nonatomic) void *imageContext;
@property (nonatomic) unsigned long long odtObjectIdentifer;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
