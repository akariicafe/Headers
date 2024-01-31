@class MUPlaceHoursSectionViewConfiguration, NSString, MUPlaceSectionRowView, NSArray, UIView;
@protocol MULabelViewProtocol, MUPlaceHoursSectionViewDelegate;

@interface MUPlaceHoursSectionView : MUPlaceVerticalCardContainerView <MUPlaceVerticalCardContainerViewDelegate, MUExpandableHoursViewDelegate> {
    UIView<MULabelViewProtocol> *_moreLabel;
    MUPlaceSectionRowView *_moreRowView;
    NSArray *_hoursViews;
}

@property (weak, nonatomic) id<MUPlaceHoursSectionViewDelegate> expandDelegate;
@property (readonly, nonatomic) MUPlaceHoursSectionViewConfiguration *sectionViewConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupViews;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_performExpansion;
- (void)_recalculateStackingIfNeeded;
- (void)expandableHoursViewDidExpand:(id)a0;
- (id)initWithSectionViewConfiguration:(id)a0;
- (void)verticalCardContainerView:(id)a0 didSelectRow:(id)a1 atIndex:(unsigned long long)a2;

@end
