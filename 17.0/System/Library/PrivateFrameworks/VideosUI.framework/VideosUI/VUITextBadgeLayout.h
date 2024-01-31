@class UIColor, NSArray, VUITextLayout;

@interface VUITextBadgeLayout : NSObject

@property (nonatomic) unsigned long long badgeKind;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) BOOL isUppercased;
@property (nonatomic) int blendMode;
@property (nonatomic) double minHeight;
@property (nonatomic) double layerCornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSArray *gradientBgColors;
@property (retain, nonatomic) VUITextLayout *textLayout;

- (void).cxx_destruct;

@end
