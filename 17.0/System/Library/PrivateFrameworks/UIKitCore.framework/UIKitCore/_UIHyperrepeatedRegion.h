@class NSString;
@protocol _UIHyperregion;

@interface _UIHyperrepeatedRegion : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying> {
    unsigned long long *__repetitions;
    double *__offset;
    double *__increment;
    double *__maximumIndices;
    struct { unsigned char maximumIndices : 1; } _clean;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double *_temp;
@property (retain, nonatomic, setter=_setRegion:) id<_UIHyperregion> _region;
@property (readonly, nonatomic) const unsigned long long *_repetitions;
@property (readonly, nonatomic) const double *_offset;
@property (readonly, nonatomic) const double *_increment;
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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDimensions:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_indexOfClosestSubregion:(double *)a0 toPoint:(const double *)a1;
- (double *)_mutableMaximumIndices;
- (void)_mutateIncrement:(id /* block */)a0;
- (void)_mutateOffset:(id /* block */)a0;
- (void)_mutateRepetitions:(id /* block */)a0;

@end
