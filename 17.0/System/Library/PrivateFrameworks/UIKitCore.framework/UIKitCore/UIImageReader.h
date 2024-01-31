@class UIImageReaderConfiguration, NSDictionary;

@interface UIImageReader : NSObject {
    UIImageReaderConfiguration *_configuration;
    NSDictionary *_imageOptions;
}

@property (class, readonly) UIImageReader *defaultReader;

@property (readonly, copy, nonatomic) UIImageReaderConfiguration *configuration;

+ (id)readerWithConfiguration:(id)a0;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)imageWithData:(id)a0;
- (id)imageWithContentsOfFileURL:(id)a0;
- (void)imageWithContentsOfFileURL:(id)a0 completion:(id /* block */)a1;
- (void)imageWithData:(id)a0 completion:(id /* block */)a1;

@end
