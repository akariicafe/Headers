@class FigAlternateObjCAudioAttributes, FigAlternateObjCVideoAttributes;

@interface FigAlternateObjC : FigKVCInspectable {
    FigAlternateObjCVideoAttributes *_videoAttributes;
    FigAlternateObjCAudioAttributes *_audioAttributes;
    struct OpaqueFigSimpleMutex { } *_mutex;
}

@property (readonly, nonatomic) double peakBitRate;
@property (readonly, nonatomic) double averageBitRate;
@property (readonly, nonatomic) FigAlternateObjCVideoAttributes *videoAttributes;
@property (readonly, nonatomic) FigAlternateObjCAudioAttributes *audioAttributes;
@property (readonly, nonatomic) struct OpaqueFigAlternate { } *figAlternate;

+ (id)dummy;

- (void)dealloc;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate { } *)a0;

@end
