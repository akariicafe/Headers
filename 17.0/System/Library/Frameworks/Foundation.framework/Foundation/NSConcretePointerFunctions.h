@interface NSConcretePointerFunctions : NSPointerFunctions {
    struct NSSlice { void **items; struct NSSliceExternalAcquisitionProperties *acquisitionProps; struct NSSliceExternalPersonalityProperties *personalityProps; struct NSSliceInternalProperties *internalProps; } slice;
}

+ (BOOL)initializeSlice:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 withOptions:(unsigned long long)a1;
+ (void)initializeBackingStore:(struct NSSlice { void **x0; struct NSSliceExternalAcquisitionProperties *x1; struct NSSliceExternalPersonalityProperties *x2; struct NSSliceInternalProperties *x3; } *)a0 sentinel:(BOOL)a1 dynamic:(BOOL)a2;

- (BOOL)usesWeakReadAndWriteBarriers;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)a0;
- (void)setHashFunction:(void /* function */ *)a0;
- (void /* function */ *)sizeFunction;
- (void /* function */ *)descriptionFunction;
- (void /* function */ *)isEqualFunction;
- (void)setSizeFunction:(void /* function */ *)a0;
- (void)setAcquireFunction:(void /* function */ *)a0;
- (void /* function */ *)hashFunction;
- (void)setIsEqualFunction:(void /* function */ *)a0;
- (void)setDescriptionFunction:(void /* function */ *)a0;
- (void /* function */ *)relinquishFunction;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)setUsesStrongWriteBarrier:(BOOL)a0;
- (BOOL)usesStrongWriteBarrier;
- (void /* function */ *)acquireFunction;
- (void)setRelinquishFunction:(void /* function */ *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
