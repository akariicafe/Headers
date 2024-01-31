@class NSArray;

@interface CHOrderedStrokeGroup : CHStrokeGroup

@property (readonly, nonatomic) NSArray *orderedStrokeIdentifiers;

- (void).cxx_destruct;
- (id)initWithAncestorIdentifier:(long long)a0 strokeIdentifiers:(id)a1 firstStrokeIdentifier:(id)a2 lastStrokeIdentifier:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 classification:(long long)a5 groupingConfidence:(double)a6 strategyIdentifier:(id)a7 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a8 orderedStrokeIdentifiers:(id)a9;
- (id)initWithUniqueIdentifier:(long long)a0 ancestorIdentifier:(long long)a1 strokeIdentifiers:(id)a2 firstStrokeIdentifier:(id)a3 lastStrokeIdentifier:(id)a4 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 classification:(long long)a6 groupingConfidence:(double)a7 strategyIdentifier:(id)a8 firstStrokeOrigin:(struct CGPoint { double x0; double x1; })a9 orderedStrokeIdentifiers:(id)a10;

@end
