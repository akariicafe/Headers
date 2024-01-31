@class NSString;

@interface _UIHyperpoint : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying> {
    double *__value;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const double *_value;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSelf;

- (void)_mutateValue:(id /* block */)a0;
- (void)dealloc;
- (id)initWithValue:(const double *)a0 objCType:(const char *)a1;
- (void)_copyValue:(const double *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_closestPoint:(double *)a0 toPoint:(const double *)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(const double *)a0 dimensions:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithDimensions:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
