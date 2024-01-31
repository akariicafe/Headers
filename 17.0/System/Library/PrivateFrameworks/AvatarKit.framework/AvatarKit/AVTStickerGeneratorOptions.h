@interface AVTStickerGeneratorOptions : NSObject {
    struct CGSize { double width; double height; } _posterSizeInPixels;
    float _posterMinimumHorizontalMargin;
}

@property (nonatomic) double size;
@property (nonatomic) double sizeMultiplier;
@property (nonatomic) double scaleFactor;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) BOOL correctClipping;
@property (nonatomic) BOOL useLegacyCorrectClippingImplementation;

+ (id)defaultOptions;
+ (id)optionsWithCorrectClipping:(BOOL)a0;

- (id)init;

@end
