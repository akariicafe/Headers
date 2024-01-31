@class AVMediaSelectionOption, FigAlternateObjC;

@interface AVAssetVariantAudioRenditionSpecificAttributes : NSObject {
    FigAlternateObjC *_figAlternateObjC;
    AVMediaSelectionOption *_mediaSelectionOption;
}

@property (readonly, nonatomic) long long channelCount;
@property (readonly, nonatomic, getter=isBinaural) BOOL binaural;
@property (readonly, nonatomic, getter=isImmersive) BOOL immersive;
@property (readonly, nonatomic, getter=isDownmix) BOOL downmix;

- (void)dealloc;
- (double)sampleRate;
- (id)initWithFigAlternateObjC:(id)a0 mediaSelectionOption:(id)a1;

@end
