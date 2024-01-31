@class NSString, NSArray;

@interface FigAlternateObjCVideoAttributes : FigKVCInspectable {
    struct OpaqueFigAlternate { } *_alternate;
    NSArray *_videoCodecTypes;
    NSArray *_allImmersiveAttributes;
    NSArray *_videoLayoutAttributes;
    struct OpaqueFigSimpleMutex { } *_mutex;
}

@property (readonly, nonatomic) NSString *videoRange;
@property (readonly, nonatomic) NSArray *codecTypes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } presentationSize;
@property (readonly, nonatomic) double nominalFrameRate;
@property (readonly, nonatomic) NSArray *immersiveAttributes;
@property (readonly, nonatomic) NSArray *videoLayoutAttributes;

- (void)dealloc;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate { } *)a0;

@end
