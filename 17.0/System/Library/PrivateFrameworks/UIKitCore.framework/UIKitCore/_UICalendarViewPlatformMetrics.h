@class UIColor, UIButtonConfiguration;

@interface _UICalendarViewPlatformMetrics : NSObject <_UIVisualStyleProviding>

@property (copy, nonatomic) id /* block */ maximumContentWidthForLayoutMargins;
@property (nonatomic) double minimumContentWidth;
@property (nonatomic) double minimumLayoutWidth;
@property (copy, nonatomic) id /* block */ headerViewLayoutMarginsForProposedLayoutMargins;
@property (copy, nonatomic) id /* block */ headerViewIntrinsicLayoutMarginsForProposedLayoutMargins;
@property (copy, nonatomic) id /* block */ headerViewInsetsForLayoutMargins;
@property (copy, nonatomic) UIButtonConfiguration *headerViewDefaultButtonConfiguration;
@property (copy, nonatomic) UIColor *monthYearLabelColor;
@property (copy, nonatomic) UIColor *expandedMonthYearLabelColor;
@property (copy, nonatomic) UIColor *monthYearChevronColor;
@property (copy, nonatomic) UIColor *expandedMonthYearChevronColor;
@property (copy, nonatomic) id /* block */ monthYearLabelFontProvider;
@property (copy, nonatomic) id /* block */ monthYearChevronSymbolConfiguration;
@property (copy, nonatomic) id /* block */ nextPreviousMonthButtonConfiguration;
@property (nonatomic) double headerViewInterMonthButtonSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } monthYearContainerEdgeInsets;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } monthYearContainerOffset;
@property (copy, nonatomic) id /* block */ monthYearContainerViewProvider;
@property (copy, nonatomic) UIColor *weekdayLabelTextColor;
@property (copy, nonatomic) id /* block */ dateCellForegroundColorProvider;
@property (copy, nonatomic) id /* block */ dateCellBackgroundColorProvider;
@property (copy, nonatomic) id /* block */ dateCellFontProvider;

+ (id)_headerViewDefaultButtonConfiguration;

- (id)init;
- (void).cxx_destruct;

@end
