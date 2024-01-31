@class NSCache;

@interface MUICachingSVGConverter : NSObject

@property (readonly, nonatomic) NSCache *cache;

- (id)init;
- (void).cxx_destruct;
- (void)imageForSVGData:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 completionHandler:(id /* block */)a3;

@end
