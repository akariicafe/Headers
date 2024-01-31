@class NSString, SearchUILabel;

@interface SearchUITableHeaderView : SearchUITableHeaderViewShared <NUIContainerViewDelegate>

@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *subtitleLabel;
@property (readonly) NSString *title;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)init;
- (void)setCardSection:(id)a0;
- (void)updateWithSection:(id)a0 isExpanded:(BOOL)a1 usesInsetRoundedSection:(BOOL)a2;
- (BOOL)sectionCanInlineExpand;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
