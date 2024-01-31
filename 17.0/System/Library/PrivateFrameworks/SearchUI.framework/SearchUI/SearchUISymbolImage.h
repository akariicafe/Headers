@class NSString, UIFont, UIColor;

@interface SearchUISymbolImage : SearchUIImage

@property (retain) NSString *symbolName;
@property (retain) UIFont *symbolFont;
@property long long symbolWeight;
@property BOOL punchThroughBackground;
@property int backgroundColor;
@property int primaryColor;
@property int secondaryColor;
@property long long preferredFill;
@property long long symbolScale;
@property double preferredSymbolFontSize;
@property (retain, nonatomic) UIColor *customForegroundColor;
@property (retain, nonatomic) UIColor *customBackgroundColor;

+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(long long)a3 isTemplate:(BOOL)a4 primaryColor:(int)a5 secondaryColor:(int)a6 appearance:(id)a7;
+ (id)chevronImage;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(long long)a3 isTemplate:(BOOL)a4;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(long long)a3 isTemplate:(BOOL)a4 platformPrimaryColor:(id)a5 platformSecondaryColor:(id)a6 appearance:(id)a7 preferredFill:(long long)a8;
+ (id)uiImageWithSymbolName:(id)a0;
+ (id)uiImageWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(long long)a3 isTemplate:(BOOL)a4 primaryColor:(int)a5 secondaryColor:(int)a6 appearance:(id)a7 preferredFill:(long long)a8;

- (unsigned long long)hash;
- (id)initWithSymbolName:(id)a0;
- (double)aspectRatio;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (int)defaultCornerRoundingStyle;
- (BOOL)drawsOnBackground;
- (id)initWithSFImage:(id)a0;
- (id)initWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2;
- (id)initWithSymbolName:(id)a0 font:(id)a1 scale:(long long)a2 weight:(long long)a3;

@end
