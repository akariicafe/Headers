@class NSString, NSArray, FigAlternateObjC;

@interface AVAssetVariantVideoAttributes : NSObject {
    FigAlternateObjC *_figAlternateObjC;
    struct OpaqueFigSimpleMutex { } *_mutex;
    NSArray *_allImmersiveAttributes;
    NSArray *_allVideoLayoutAttributes;
}

@property (readonly, nonatomic) NSString *videoRange;
@property (readonly, nonatomic) NSArray *codecTypes;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } presentationSize;
@property (readonly, nonatomic) double nominalFrameRate;
@property (readonly, nonatomic) NSArray *videoLayoutAttributes;

- (void)dealloc;
- (id)description;
- (id)immersiveAttributes;
- (id)initWithFigAlternateObjC:(id)a0;

@end
