@interface SKUIImageDataConsumer : SSVURLDataConsumer

@property (readonly, nonatomic, getter=isImagePlaceholderAvailable) BOOL imagePlaceholderAvailable;

- (id)objectForData:(id)a0 response:(id)a1 error:(id *)a2;
- (id)imageForColor:(id)a0;
- (id)imageForColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)imageForImage:(id)a0;
- (id)imagePlaceholderForColor:(id)a0;

@end
