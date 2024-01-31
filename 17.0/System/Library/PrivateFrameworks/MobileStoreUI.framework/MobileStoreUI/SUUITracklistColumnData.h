@class NSArray;

@interface SUUITracklistColumnData : NSObject

@property (copy, nonatomic) NSArray *columns;
@property (nonatomic) double interColumnSpacing;
@property (nonatomic) double leftEdgeInset;
@property (nonatomic) double rightEdgeInset;

- (void).cxx_destruct;
- (void)adjustColumnsToFitWidth:(double)a0;
- (id)columnForIdentifier:(long long)a0;
- (void)enumerateColumnsForHeader:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateColumnsForTrack:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithRepresentativeTrack:(id)a0;
- (id)viewElementsForTrack:(id)a0 columnIndex:(long long)a1;
- (id)_initSUUITracklistColumnData;

@end
