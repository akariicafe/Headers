@interface _TVMonogramResourceImageGenerator : _TVMonogramImageGenerator

+ (BOOL)isResourceURL:(id)a0;
+ (id)tintImage:(id)a0 withColor:(id)a1;

- (void)cancelLoad:(id)a0;
- (id)loadImageForObject:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2 imageDirection:(long long)a3 requestLoader:(id)a4 completionHandler:(id /* block */)a5;

@end
