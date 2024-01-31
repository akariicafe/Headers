@class NSMutableArray;

@interface _HUDGraph : _HUDRow

@property (retain, nonatomic) NSMutableArray *statistics;
@property (nonatomic) double min;
@property (nonatomic) double max;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 min:(double)a1 max:(double)a2;

@end
