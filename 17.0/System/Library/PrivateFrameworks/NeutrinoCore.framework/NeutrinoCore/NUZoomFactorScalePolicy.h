@class NSString;

@interface NUZoomFactorScalePolicy : NSObject <NUScalePolicy> {
    double _zoomFactor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct { long long x0; long long x1; })scaleForImageSize:(struct { long long x0; long long x1; })a0;
- (id)initWithZoomFactor:(double)a0;

@end
