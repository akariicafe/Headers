@class NSString, NSDictionary, NSError, ARFaceGeometry;
@protocol ARFaceTrackingDataProtocol;

@interface ARFaceAnchor : ARAnchor <ARTrackable> {
    NSDictionary *_blendShapeCoefficientsDictionary;
}

@property (retain, nonatomic) id<ARFaceTrackingDataProtocol> trackingData;
@property (nonatomic) BOOL isTracked;
@property (retain, nonatomic) NSError *trackingError;
@property (readonly, nonatomic) ARFaceGeometry *geometry;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } leftEyeTransform;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } rightEyeTransform;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ lookAtPoint;
@property (readonly, nonatomic) NSDictionary *blendShapes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)blendShapeMapping;
+ (id)blendShapeToMirroredBlendShapeMapping;
+ (id)mirroredBlendShapeMapping;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAnchor:(id)a0;
- (id)copyWithTrackedState:(BOOL)a0;
- (id)faceTrackingData;
- (void /* unknown type, empty encoding */)gazePoint;
- (const void *)imageVertices;
- (id)initWithExistingFaceAnchor:(id)a0 tracked:(BOOL)a1 trackingError:(id)a2;
- (id)initWithIdentifier:(id)a0 faceTrackingData:(id)a1;
- (id)initWithIdentifier:(id)a0 trackingData:(id)a1;
- (BOOL)isEqualToFaceAnchor:(id)a0;

@end
