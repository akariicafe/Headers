@class SFImageDerivedColor, SearchUIImage;

@interface SearchUIImageDerivedColorGenerator : SearchUIColorGenerator

@property (retain, nonatomic) SFImageDerivedColor *sfColor;
@property (retain, nonatomic) SearchUIImage *searchUIImage;

+ (id)colorsForImageRef:(struct CGImage { } *)a0;
+ (void)fetchColorsForImage:(id)a0 withCompletionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)generateUIColorsForSFImage:(id)a0 isDark:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)generateUIColorsIsDark:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
