@class NSArray, HKGraphSeries;
@protocol HKGraphSeriesAxisAnnotation;

@interface HKGraphViewRendererSeriesRow : NSObject

@property (readonly, nonatomic) NSArray *overlaidSeries;
@property (readonly, nonatomic) HKGraphSeries *mainSeriesForRow;
@property (readonly, nonatomic) HKGraphSeries *selectedSeriesForRow;
@property (readonly, nonatomic) NSArray *selectedRangeBoundariesXValue;
@property (readonly, nonatomic) long long selectedTouchPointCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } yAxisRect;
@property (readonly, nonatomic) id<HKGraphSeriesAxisAnnotation> axisAnnotationHandler;

- (void).cxx_destruct;
- (id)initWithRowSeries:(id)a0 mainSeriesForRow:(id)a1 selectedSeriesForRow:(id)a2 selectedRangeBoundariesXValue:(id)a3 selectedTouchPointCount:(long long)a4 yAxisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 axisAnnotationHandler:(id)a6;

@end
