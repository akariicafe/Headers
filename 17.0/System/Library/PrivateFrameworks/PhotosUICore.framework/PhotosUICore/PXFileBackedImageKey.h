@class NSURL;

@interface PXFileBackedImageKey : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithUrl:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
