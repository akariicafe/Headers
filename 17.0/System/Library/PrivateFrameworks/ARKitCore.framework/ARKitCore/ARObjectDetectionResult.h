@class ARReferenceObject;

@interface ARObjectDetectionResult : NSObject

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } visionTransform;
@property (retain, nonatomic) ARReferenceObject *referenceObject;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
