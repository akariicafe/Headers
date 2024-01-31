@class SearchUICombinedCardSectionsView, NSString;

@interface SearchUICombinedCollectionViewCell : SearchUICollectionViewCell <VRXInteractionDelegate>

@property (retain) SearchUICombinedCardSectionsView *cardSectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)createButtons:(id)a0 :(id /* block */)a1;
- (id)sizingView;
- (void)updateChevronVisible:(BOOL)a0 leaveSpaceForChevron:(BOOL)a1;

@end
