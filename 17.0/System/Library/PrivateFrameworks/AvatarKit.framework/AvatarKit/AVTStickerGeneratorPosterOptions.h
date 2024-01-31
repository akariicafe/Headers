@interface AVTStickerGeneratorPosterOptions : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double minimumHorizontalMargin;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL growsForExtraTallContent;

- (id)init;

@end
