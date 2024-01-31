@class UIColor, NSString, SXTextShadow, SXJSONArray, SXTextDecoration, SXTextStroke;
@protocol SXTextStyleFontAttributes;

@interface SXTextStyle : SXJSONObject <SXTextStyle>

@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long fontSize;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) SXTextShadow *textShadow;
@property (readonly, nonatomic) long long textTransform;
@property (readonly, nonatomic) double tracking;
@property (readonly, nonatomic) SXTextDecoration *underline;
@property (readonly, nonatomic) SXTextDecoration *strikethrough;
@property (readonly, nonatomic) SXJSONArray *listStyle;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) SXTextStroke *stroke;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) id<SXTextStyleFontAttributes> fontAttributes;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;
+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;

- (long long)fontSizeWithValue:(id)a0 withType:(int)a1;
- (long long)textTransformWithValue:(id)a0 withType:(int)a1;
- (int)verticalAlignmentWithValue:(id)a0 withType:(int)a1;

@end
