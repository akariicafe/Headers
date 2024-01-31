@class CDRichComplicationRingView;

@interface NTKRichComplicationRingProgressView : CDRichComplicationProgressView {
    double _curveWidth;
    CDRichComplicationRingView *_backgroundView;
    CDRichComplicationRingView *_foregroundView;
}

@property (nonatomic) BOOL clockwise;

- (void).cxx_destruct;
- (id)initWithFamily:(long long)a0 curveWidth:(double)a1 padding:(double)a2 forDevice:(id)a3;

@end
