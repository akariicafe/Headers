@interface SKUIScreenshotDataConsumer : SKUIStyledImageDataConsumer

@property (nonatomic) BOOL forcesPortrait;

+ (id)consumer;
+ (id)consumerWithScreenshotSize:(struct CGSize { double x0; double x1; })a0;

- (id)imageForColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)imageForImage:(id)a0;

@end
