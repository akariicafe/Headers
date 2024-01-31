@class NSArray, NSString;

@interface _UIHyperregionUnion : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double *_temp;
@property (copy, nonatomic, setter=_setRegions:) NSArray *_regions;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSelf;

- (void)dealloc;
- (BOOL)_isBoundaryCrossedFromPoint:(const double *)a0 toPoint:(const double *)a1;
- (void)encodeWithCoder:(id)a0;
- (void)_closestPoint:(double *)a0 toPoint:(const double *)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (unsigned long long)_regionIndexForClosestPoint:(double *)a0 toPoint:(const double *)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDimensions:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
