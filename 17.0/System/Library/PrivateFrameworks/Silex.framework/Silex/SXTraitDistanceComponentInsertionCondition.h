@class NSString, NSMutableIndexSet;

@interface SXTraitDistanceComponentInsertionCondition : NSObject <SXComponentInsertionCondition>

@property (readonly, nonatomic) unsigned long long componentTrait;
@property (readonly, nonatomic) unsigned long long otherComponentTrait;
@property (readonly, nonatomic) struct _SXConvertibleValue { double value; unsigned long long unit; } distance;
@property (retain, nonatomic) NSMutableIndexSet *traitAreas;
@property (retain, nonatomic) NSMutableIndexSet *otherTraitAreas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTrait:(unsigned long long)a0 otherTrait:(unsigned long long)a1 distance:(struct _SXConvertibleValue { double x0; unsigned long long x1; })a2;
- (void)insertedComponent:(id)a0 approximateLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)inspectTraitAreasForComponents:(id)a0 layoutProvider:(id)a1 DOMObjectProvider:(id)a2;
- (void)prepareWithComponents:(id)a0 layoutProvider:(id)a1 DOMObjectProvider:(id)a2;
- (BOOL)validateMarker:(id)a0 componentTraits:(unsigned long long)a1 layoutProvider:(id)a2;

@end
