@class NSArray, NSString, UIColor;

@interface AAUIBadgeModelConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long badgeShape;
@property (retain, nonatomic) NSArray *badgeModelPaths;
@property (retain, nonatomic) NSArray *badgeTexturePaths;
@property (copy, nonatomic) NSString *glyphTexturePath;
@property (copy, nonatomic) NSString *shapeName;
@property (copy, nonatomic) UIColor *metalColor;
@property (nonatomic) double glyphTextureScale;
@property (nonatomic) struct CGPoint { double x; double y; } glyphPositionOffset;
@property (nonatomic) BOOL useFullColorEnamel;
@property (copy, nonatomic) UIColor *modelEnamelColor;
@property (nonatomic) BOOL unearnedUsesTwoToneEnamel;
@property (nonatomic) BOOL faceHasMetalInlay;
@property (copy, nonatomic) NSArray *enamelTriColors;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModelPaths:(id)a0 texturePaths:(id)a1 shapeName:(id)a2 metalColor:(id)a3 useFullColorEnamel:(BOOL)a4 modelEnamelColor:(id)a5 unearnedUsesTwoToneEnamel:(BOOL)a6 faceHasMetalInlay:(BOOL)a7 enamelTricolors:(id)a8 glyphTexturePath:(id)a9 glyphTextureScale:(double)a10 glyphPositionOffset:(struct CGPoint { double x0; double x1; })a11;

@end
