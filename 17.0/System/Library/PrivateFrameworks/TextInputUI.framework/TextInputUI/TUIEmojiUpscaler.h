@class MADService;

@interface TUIEmojiUpscaler : NSObject {
    MADService *_madService;
}

+ (id)sharedInstance;
+ (struct CGColorSpace { } *)sRGB;

- (id)init;
- (void).cxx_destruct;
- (id)imageFromEmoji:(id)a0;
- (void)generateEmoji:(id)a0 completion:(id /* block */)a1;
- (void)generateEmoji:(id)a0 forImage:(id)a1 completion:(id /* block */)a2;
- (void)loadModel:(id /* block */)a0;

@end
