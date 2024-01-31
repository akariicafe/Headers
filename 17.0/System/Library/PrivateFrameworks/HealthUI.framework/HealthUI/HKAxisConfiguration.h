@class NSNumber, HKAxisStyle, HKCoordinateTransform;
@protocol HKZoomScale, HKAxisLabelDataSource;

@interface HKAxisConfiguration : NSObject

@property (retain, nonatomic) HKAxisStyle *preferredStyle;
@property (nonatomic) long long maxLabels;
@property (nonatomic) long long minLabels;
@property (retain, nonatomic) NSNumber *maxLabelWidth;
@property (retain, nonatomic) HKCoordinateTransform *transform;
@property (retain, nonatomic) id<HKZoomScale> zoomScaleEngine;
@property (weak, nonatomic) id<HKAxisLabelDataSource> labelDataSource;
@property (nonatomic) BOOL overrideNoTopBaseline;

- (id)init;
- (void).cxx_destruct;
- (void)applyOverridesFromAxisConfiguration:(id)a0;

@end
