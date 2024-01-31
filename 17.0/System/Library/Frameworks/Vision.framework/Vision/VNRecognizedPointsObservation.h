@class VNRecognizedPointsSpecifier, NSNumber, NSArray;

@interface VNRecognizedPointsObservation : VNObservation {
    VNRecognizedPointsSpecifier *_specifier;
}

@property (readonly) VNRecognizedPointsSpecifier *recognizedPointsSpecifier;
@property (readonly) NSNumber *groupIdentifier;
@property (readonly, copy) NSArray *availableKeys;
@property (readonly, copy) NSArray *availableGroupKeys;

+ (BOOL)supportsSecureCoding;

- (id)debugQuickLookObject;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAllJointsToPath:(struct CGPath { } *)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0 keypointReturningObservation:(id)a1;
- (id)keypointsMultiArrayAndReturnError:(id *)a0;
- (id)recognizedPointForKey:(id)a0 error:(id *)a1;
- (id)recognizedPointsForGroupKey:(id)a0 error:(id *)a1;
- (id)vn_cloneObject;

@end
