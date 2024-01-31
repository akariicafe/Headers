@class NSURL;

@interface SKUIImageViewElementCacheKey : NSObject {
    long long _imageTreatment;
    struct CGSize { double width; double height; } _size;
    NSURL *_url;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 imageTreatment:(id)a2;

@end
