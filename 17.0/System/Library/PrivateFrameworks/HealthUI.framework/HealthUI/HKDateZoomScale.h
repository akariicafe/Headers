@class NSString, NSCalendar, HKValueRange;

@interface HKDateZoomScale : NSObject <HKZoomScale> {
    double _previousZoomScale;
    long long _previousZoom;
    HKValueRange *_unitZoomScaleValueRange;
}

@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)minDate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)maxDate;
- (id)initWithCurrentCalendar:(id)a0;
- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)a0;
- (id)unitZoomScaleValueRange;
- (long long)zoomForZoomScale:(double)a0;
- (double)zoomScaleForRange:(struct HKRange { double x0; double x1; })a0;

@end
