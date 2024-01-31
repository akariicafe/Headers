@class UIColor, DOCTag;

@interface DOCTagSymbolImageConfiguration : NSObject

@property (readonly, nonatomic) DOCTag *tag;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) unsigned long long variant;
@property (readonly, nonatomic) BOOL differentiateWithShapes;

- (void).cxx_destruct;
- (id)initWithTag:(id)a0 color:(id)a1 variant:(unsigned long long)a2 differentiateWithShapes:(BOOL)a3;
- (id)loadedImageForSettings;

@end
