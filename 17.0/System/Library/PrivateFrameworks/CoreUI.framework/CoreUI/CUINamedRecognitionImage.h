@interface CUINamedRecognitionImage : CUINamedLookup

@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } physicalSizeInMeters;
@property (readonly, nonatomic) int exifOrientation;

- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;

@end
