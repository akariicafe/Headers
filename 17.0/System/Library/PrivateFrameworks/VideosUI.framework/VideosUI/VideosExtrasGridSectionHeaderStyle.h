@class NSString, NSDictionary, UIColor;

@interface VideosExtrasGridSectionHeaderStyle : NSObject

@property (retain, nonatomic) NSString *textStyle;
@property (retain, nonatomic) NSDictionary *defaultFontAttributes;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (nonatomic) double textBaselineHeight;
@property (nonatomic) double textBaselineDescender;

- (void).cxx_destruct;

@end
