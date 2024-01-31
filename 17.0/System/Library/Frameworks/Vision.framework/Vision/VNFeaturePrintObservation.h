@class NSData;

@interface VNFeaturePrintObservation : VNObservation

@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long elementCount;
@property (readonly) NSData *data;

+ (BOOL)supportsSecureCoding;

- (BOOL)computeDistance:(float *)a0 toFeaturePrintObservation:(id)a1 error:(id *)a2;
- (float)computeDistanceToFeaturePrintObservation:(id)a0 error:(id *)a1;

@end
