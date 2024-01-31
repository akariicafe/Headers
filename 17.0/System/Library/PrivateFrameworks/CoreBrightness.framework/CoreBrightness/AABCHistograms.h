@class CBHistogramBuilder;

@interface AABCHistograms : NSObject

@property (readonly) CBHistogramBuilder *L;
@property (readonly) CBHistogramBuilder *LOff;
@property (readonly) CBHistogramBuilder *LDevice;
@property (readonly) CBHistogramBuilder *LDeviceOff;
@property (readonly) CBHistogramBuilder *LLPM;
@property (readonly) CBHistogramBuilder *E;

- (id)init;
- (void)dealloc;
- (void)submit;

@end
