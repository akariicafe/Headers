@interface CHTimeWindowStrokeGroup : CHStrokeGroup

@property (readonly, nonatomic) double startTimestamp;
@property (readonly, nonatomic) double endTimestamp;

- (id)groupByAddingStrokeIdentifiers:(id)a0 removingStrokeIdentifiers:(id)a1 firstStrokeIdentifier:(id)a2 lastStrokeIdentifier:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 startTimestamp:(double)a5 endTimestamp:(double)a6;
- (id)initWithStrokeIdentifiers:(id)a0 firstStrokeIdentifier:(id)a1 lastStrokeIdentifier:(id)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 startTimestamp:(double)a4 endTimestamp:(double)a5;

@end
