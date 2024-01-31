@interface AVTStickerRecentsLayout : NSObject

@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfItemsPerRow;
@property (readonly, nonatomic) long long numberOfItemsPerColumn;
@property (readonly, nonatomic) long long interitemPadding;
@property (readonly, nonatomic) long long appButtonIndex;
@property (readonly, nonatomic) BOOL laysOutVertically;

+ (struct CGSize { double x0; double x1; })buttonSizeForContainerSize:(struct CGSize { double x0; double x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithNumberOfItemsPerRow:(long long)a0 numberOfItemsPerColumn:(long long)a1 interitemPadding:(double)a2 appButtonIndex:(long long)a3 laysOutVertically:(BOOL)a4;

@end
