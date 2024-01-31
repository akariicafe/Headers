@class NSString;

@interface AVTViewCarouselLayout : NSObject <AVTViewCarouselLayout>

@property (readonly, nonatomic) struct CGSize { double width; double height; } avtViewAspectRatio;
@property (nonatomic) BOOL fillContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adaptativeLayoutWithAVTViewAspectRatio:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })fullSizeForBounds:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })severalItemsSizeForBounds:(struct CGSize { double x0; double x1; })a0 aspectRatio:(struct CGSize { double x0; double x1; })a1;

- (struct CGSize { double x0; double x1; })avatarViewSizeForAvailableContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })contentViewSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithAVTViewAspectRatio:(struct CGSize { double x0; double x1; })a0;

@end
