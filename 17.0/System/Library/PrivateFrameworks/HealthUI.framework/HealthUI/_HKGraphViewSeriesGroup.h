@class HKLegendView, _HKGraphViewSelectionContext, NSMutableDictionary, _HKGraphViewAxisAnnotationHandler, NSArray, NSMutableArray;

@interface _HKGraphViewSeriesGroup : NSObject

@property (retain, nonatomic) NSMutableDictionary *zoomToSeriesMapping;
@property (retain, nonatomic) NSMutableArray *currentSeries;
@property (retain, nonatomic) _HKGraphViewSelectionContext *selectionContext;
@property (retain, nonatomic) _HKGraphViewAxisAnnotationHandler *axisAnnotationHandler;
@property (retain, nonatomic) NSArray *independentAxes;
@property (retain, nonatomic) HKLegendView *legendView;
@property (nonatomic) struct CGSize { double width; double height; } lastLegendSize;

- (id)init;
- (void).cxx_destruct;

@end
