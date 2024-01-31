@class NSString, NSDictionary, UIColor;

@interface VideosExtrasGridHeaderStyle : NSObject

@property (nonatomic) BOOL showsImage;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) NSString *titleTextStyle;
@property (nonatomic) double titleLineHeight;
@property (retain, nonatomic) NSString *subtitleTextStyle;
@property (nonatomic) double subtitleLineHeight;
@property (nonatomic) double bottomLabelDescender;
@property (retain, nonatomic) NSDictionary *titleDefaultFontAttributes;
@property (retain, nonatomic) NSDictionary *subtitleDefaultFontAttributes;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *subtitleColor;

- (void).cxx_destruct;

@end
