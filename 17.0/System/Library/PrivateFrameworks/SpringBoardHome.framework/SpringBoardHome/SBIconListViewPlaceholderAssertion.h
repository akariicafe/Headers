@class NSString, SBPlaceholderIcon, SBIcon, SBIconListView;

@interface SBIconListViewPlaceholderAssertion : NSObject <SBIconListViewPlaceholderPositioning, BSDescriptionProviding>

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) unsigned long long gridSizeClass;
@property (readonly, nonatomic) SBIcon *representedIcon;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long listMutationOptions;
@property (readonly, nonatomic) unsigned long long folderMutationOptions;
@property (readonly, nonatomic) SBIconListView *listView;
@property (readonly, nonatomic) SBPlaceholderIcon *placeholderIcon;
@property (retain, nonatomic) SBIcon *positioningRelativeIcon;
@property (nonatomic) long long positioningType;
@property (nonatomic) unsigned long long gridCellIndex;
@property (readonly, nonatomic) unsigned long long effectiveGridCellIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setOptions:(unsigned long long)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)placeAfterIcon:(id)a0;
- (void)placeAboveIcon:(id)a0;
- (void)placeBelowIcon:(id)a0;
- (void)didChangePlaceholderPosition;
- (id)initWithGridCellIndex:(unsigned long long)a0 gridSizeClass:(unsigned long long)a1 reason:(id)a2 options:(unsigned long long)a3 listView:(id)a4;
- (id)initWithGridCellIndex:(unsigned long long)a0 representedIcon:(id)a1 reason:(id)a2 options:(unsigned long long)a3 listView:(id)a4;
- (void)placeBeforeIcon:(id)a0;
- (void)swapWithIcon:(id)a0;

@end
