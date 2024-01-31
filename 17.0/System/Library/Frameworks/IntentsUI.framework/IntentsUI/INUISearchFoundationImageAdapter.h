@class INImage, NSValue;

@interface INUISearchFoundationImageAdapter : SFImage {
    NSValue *_sizeValue;
}

@property (copy, nonatomic) INImage *intentsImage;

+ (void)initialize;
+ (id)_sharedImageLoader;

- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (int)source;
- (BOOL)isEqual:(id)a0;
- (id)initWithIntentsImage:(id)a0;
- (id)initWithPayloadImage:(id)a0;
- (id)payloadImage;

@end
