@class SKUIColorScheme, SKUIProductImageDataConsumer, SKUIStyledImageDataConsumer, UIColor, NSMutableDictionary;

@interface SKUIItemArtworkContext : NSObject {
    NSMutableDictionary *_placeholders;
}

@property (retain, nonatomic) SKUIProductImageDataConsumer *generalConsumer;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconConsumer;
@property (retain, nonatomic) SKUIProductImageDataConsumer *letterboxConsumer;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *newsstandConsumer;
@property (retain, nonatomic) SKUIProductImageDataConsumer *posterConsumer;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *messagesIconConsumer;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (retain, nonatomic) UIColor *backgroundColor;

+ (id)wishlistContext;
+ (id)lockupContextWithSize:(long long)a0;
+ (id)roomContext;

- (void).cxx_destruct;
- (id)artworkForItem:(id)a0;
- (id)URLForItem:(id)a0;
- (id)dataConsumerForItem:(id)a0;
- (struct CGSize { double x0; double x1; })imageSizeForItem:(id)a0;
- (struct CGSize { double x0; double x1; })largestImageSizeForItems:(id)a0;
- (struct CGSize { double x0; double x1; })largestImageSizeForLockups:(id)a0;
- (id)placeholderImageForItem:(id)a0;

@end
