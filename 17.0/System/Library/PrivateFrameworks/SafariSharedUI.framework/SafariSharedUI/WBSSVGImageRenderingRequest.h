@class NSArray, NSString;

@interface WBSSVGImageRenderingRequest : WBSSiteMetadataRequest

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) NSArray *urls;
@property (readonly, nonatomic) NSString *svgContent;

- (id)_imageSizeValueWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSVGContent:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithURL:(id)a0 extraInfo:(id)a1;
- (id)initWithURL:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithURLs:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;

@end
