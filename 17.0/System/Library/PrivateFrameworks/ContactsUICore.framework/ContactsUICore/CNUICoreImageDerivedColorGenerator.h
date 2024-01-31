@interface CNUICoreImageDerivedColorGenerator : NSObject

+ (id)scheduler;
+ (id)ciContextWithHighPriority:(BOOL)a0;
+ (unsigned long long)colorArraySize;
+ (id)colorsForImageRef:(struct CGImage { } *)a0;
+ (id)colorsForUIImage:(id)a0;
+ (id)defaultGrayColors;
+ (void)fetchColorsForImage:(id)a0 ciContext:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)tintedUIColorsFromUIColors:(id)a0 isLight:(BOOL)a1;

@end
