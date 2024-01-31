@interface _VUIMonogramInitialsSilhouetteImageGenerator : _VUIMonogramImageGenerator

+ (id)_initialsForFirstName:(id)a0 lastName:(id)a1;
+ (void)drawInitialsWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andDescription:(id)a1;
+ (id)monogramImageWithDescription:(id)a0;

- (void)cancelLoad:(id)a0;
- (id)imageKeyForObject:(id)a0;
- (id)loadImageForObject:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2 imageDirection:(long long)a3 requestLoader:(id)a4 completionHandler:(id /* block */)a5;

@end
