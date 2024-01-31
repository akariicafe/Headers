@class VKCStickerEffect, UIImage, UIView, NSData, VKCStickerVideoDecoder;
@protocol VKStickerEffectViewInternal;

@interface VKCStickerEffectView : UIView <VKCStickerVideoDecoderDelegate> {
    struct CGSize { double width; double height; } _size;
    UIImage *_fullSizeImage;
}

@property (retain, nonatomic) UIView<VKStickerEffectViewInternal> *internalView;
@property (retain, nonatomic) VKCStickerVideoDecoder *videoDecoder;
@property (retain, nonatomic) UIImage *_image;
@property (nonatomic) double curlPosition;
@property (retain, nonatomic) VKCStickerEffect *effect;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSData *videoData;
@property (nonatomic, getter=isPaused) BOOL paused;

+ (double)extraScaleToIncludeStrokeWithEffectType:(long long)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)boundsIncludeStroke;
- (void)decoder:(id)a0 displayFrame:(struct CGImage { } *)a1 forIndex:(long long)a2;
- (id)imageWithImage:(id)a0 scaledToSize:(struct CGSize { double x0; double x1; })a1;
- (void)initialProcessingCompleteForDecoder:(id)a0;
- (void)playSettlingAnimation;
- (void)setBoundsIncludeStroke:(BOOL)a0;
- (void)snapshotWithCompletionHandler:(id /* block */)a0;

@end
