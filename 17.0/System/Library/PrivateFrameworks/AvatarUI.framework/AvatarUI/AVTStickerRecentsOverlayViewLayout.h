@interface AVTStickerRecentsOverlayViewLayout : NSObject

@property (readonly, nonatomic) double imageToTopPadding;
@property (readonly, nonatomic) double imageToTitlePadding;
@property (readonly, nonatomic) double titleToSubtitlePadding;
@property (readonly, nonatomic) double subtitleToButtonPadding;
@property (readonly, nonatomic) double imageHeight;
@property (readonly, nonatomic) double horizontalEdgePadding;

+ (id)buttonsLandscapeLayout;
+ (id)buttonsPortraitLayout;
+ (id)standardLandscapeLayout;
+ (id)standardPortraitLayout;

- (id)initWithImageToTopPadding:(double)a0 imageToTitlePadding:(double)a1 titleToSubtitlePadding:(double)a2 subtitleToButtonPadding:(double)a3 imageHeight:(double)a4 horizontalEdgePadding:(double)a5;

@end
