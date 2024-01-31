@class UIColor, UIFont;

@interface PXWidgetBarSpec : NSObject <NSCopying>

@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *primaryFont;
@property (retain, nonatomic) UIFont *secondaryFont;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL shouldUseSingleLine;
@property (nonatomic) double distanceBetweenTopAndFirstBaseline;
@property (nonatomic) double distanceBetweenLastBaselineAndBottom;
@property (nonatomic) double minimumDistanceBetweenTopAndFirstAscender;
@property (nonatomic) double minimumDistanceBetweenLastDescenderAndBottom;
@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) double horizontalSpacingBetweenTitleAndSubtitle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
