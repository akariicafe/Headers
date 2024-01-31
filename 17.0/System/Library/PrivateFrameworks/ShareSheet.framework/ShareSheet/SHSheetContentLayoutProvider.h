@class SHSheetContentLayoutSpec;
@protocol SHSheetContentLayoutDelegate;

@interface SHSheetContentLayoutProvider : NSObject

@property (readonly, nonatomic) SHSheetContentLayoutSpec *layoutSpec;
@property (weak, nonatomic) id<SHSheetContentLayoutDelegate> delegate;

+ (id)_createFooterSupplementaryItemWithHeightDimension:(id)a0;
+ (id)_createHeaderSupplementaryItemWithHeightDimension:(id)a0;

- (void).cxx_destruct;
- (id)_createHorizontalLayoutSectionWithContext:(id)a0 iconWidth:(double)a1;
- (id)_layoutForActionsSectionWithContext:(id)a0;
- (id)_layoutForAppsSectionWithContext:(id)a0;
- (id)_layoutForCustomViewSectionWithContext:(id)a0;
- (id)_layoutForHeroActionsSectionWithContext:(id)a0;
- (id)_layoutForPeopleSectionWithContext:(id)a0;
- (long long)_sectionForContext:(id)a0;
- (id)initWithLayoutSpec:(id)a0;
- (id)layoutSectionForContext:(id)a0;

@end
