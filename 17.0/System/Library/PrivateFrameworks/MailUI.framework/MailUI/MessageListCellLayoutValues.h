@class UIBackgroundConfiguration, UIFont, UIColor, UITraitCollection;

@interface MessageListCellLayoutValues : NSObject {
    double _bottomMargin;
    double _bodyLeading;
    double _bottomPadding;
    double _leadingToIndicatorMargin;
    double _indicatorToTrailingMargin;
    double _indicatorMaxWidth;
    double _topMargin;
    double _leadingPadding;
    double _trailingPadding;
    double _addressCapHeight;
    UIFont *_summaryFont;
    UIFont *_dateFont;
    BOOL _useSidebarAppearance;
}

@property (readonly, nonatomic) UIFont *addressFont;
@property (readonly, nonatomic) UIFont *dateFont;
@property (readonly, nonatomic) UIFont *subjectFont;
@property (readonly, nonatomic) UIFont *summaryFont;
@property (readonly, nonatomic) double compactRowHeight;
@property (readonly, nonatomic) double defaultRowHeight;
@property (readonly, nonatomic) double bodyLeading;
@property (readonly, nonatomic) double addressCapHeight;
@property (readonly, nonatomic) double addressAndSubjectHeight;
@property (readonly, nonatomic) double topPadding;
@property (readonly, nonatomic) double bottomPadding;
@property (readonly, nonatomic) double leadingPadding;
@property (readonly, nonatomic) double trailingPadding;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } padding;
@property (readonly, nonatomic) double topMargin;
@property (readonly, nonatomic) double bottomMargin;
@property (readonly, nonatomic) double leadingToIndicatorMargin;
@property (readonly, nonatomic) double indicatorToTrailingMargin;
@property (readonly, nonatomic) double indicatorMaxWidth;
@property (readonly, nonatomic, getter=isSubjectVisible) BOOL subjectVisible;
@property (readonly, nonatomic) long long subjectNumberOfLines;
@property (readonly, nonatomic) BOOL useSidebarAppearance;
@property (readonly, nonatomic) double backgroundCornerRadius;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (copy, nonatomic) UIBackgroundConfiguration *defaultBackgroundConfiguration;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) BOOL supportsPopover;
@property (nonatomic) BOOL inMultiSelectionMode;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } systemLayoutMargins;

- (id)_init;
- (void).cxx_destruct;
- (void)_invalidateAndNotify:(BOOL)a0;
- (double)heightWithNumberOfSummaryLines:(long long)a0;
- (long long)linesOfSummaryForCompactHeight:(BOOL)a0;
- (id)absentDataColorForConfigurationState:(id)a0 contentConfiguration:(id)a1 backgroundConfiguration:(id)a2;
- (long long)actualLineCountForSummary:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)addressColorForContentConfiguration:(id)a0;
- (id)annotationColorForConfigurationState:(id)a0 contentConfiguration:(id)a1 backgroundConfiguration:(id)a2;
- (id)backgroundColorForConfigurationState:(id)a0 backgroundConfiguration:(id)a1;
- (id)backgroundColorForSelectedState:(unsigned long long)a0 disclosureEnabled:(BOOL)a1;
- (id)dateColorForConfigurationState:(id)a0 contentConfiguration:(id)a1 backgroundConfiguration:(id)a2;
- (id)recipientColorForConfigurationState:(id)a0 contentConfiguration:(id)a1 backgroundConfiguration:(id)a2;
- (id)subjectColorForContentConfiguration:(id)a0;
- (id)summaryColorForConfigurationState:(id)a0 contentConfiguration:(id)a1 backgroundConfiguration:(id)a2;
- (id)threadDisclosureColorForConfigurationState:(id)a0 contentConfiguration:(id)a1 backgroundConfiguration:(id)a2;
- (BOOL)useSelectedColorForConfigurationState:(id)a0 backgroundConfiguration:(id)a1;

@end
