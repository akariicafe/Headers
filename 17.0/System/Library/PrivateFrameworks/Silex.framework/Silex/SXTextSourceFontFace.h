@class NSString, NSDictionary;
@protocol SXFontAttributes;

@interface SXTextSourceFontFace : NSObject <SXFontFace>

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) id<SXFontAttributes> fontAttributes;
@property (readonly, nonatomic) NSDictionary *fontDescriptorAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicFontAttributesForFontName:(id)a0;
+ (id)fontFaceWithFontName:(id)a0;
+ (id)fontFaceWithFontName:(id)a0 andAttributes:(id)a1;

- (void).cxx_destruct;

@end
