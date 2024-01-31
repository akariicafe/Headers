@class SUUIColorScheme, UIColor, NSMutableDictionary, SUUIStyledImageDataConsumer, SUUIProductImageDataConsumer;

@interface SUUIItemArtworkContext : NSObject {
    NSMutableDictionary *_placeholders;
}

@property (retain, nonatomic) SUUIProductImageDataConsumer *generalConsumer;
@property (retain, nonatomic) SUUIStyledImageDataConsumer *iconConsumer;
@property (retain, nonatomic) SUUIProductImageDataConsumer *letterboxConsumer;
@property (retain, nonatomic) SUUIStyledImageDataConsumer *newsstandConsumer;
@property (retain, nonatomic) SUUIProductImageDataConsumer *posterConsumer;
@property (retain, nonatomic) SUUIStyledImageDataConsumer *messagesIconConsumer;
@property (retain, nonatomic) SUUIColorScheme *colorScheme;
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
