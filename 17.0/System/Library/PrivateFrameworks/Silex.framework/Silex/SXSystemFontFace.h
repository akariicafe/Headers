@class NSString, NSDictionary;
@protocol SXFontAttributes;

@interface SXSystemFontFace : NSObject <SXFontFace>

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) id<SXFontAttributes> fontAttributes;
@property (readonly, nonatomic) NSDictionary *fontDescriptorAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (id)fontAttributesForMetadata:(id)a0;
- (long long)fontStyleForValue:(id)a0;
- (long long)fontWeightForValue:(id)a0;
- (long long)fontWidthForValue:(id)a0;

@end
