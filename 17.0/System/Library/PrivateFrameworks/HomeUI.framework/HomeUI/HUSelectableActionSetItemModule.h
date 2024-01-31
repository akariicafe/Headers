@class NSString;

@interface HUSelectableActionSetItemModule : HUActionSetItemModule {
    void /* unknown type, empty encoding */ selectionController;
    void /* unknown type, empty encoding */ sceneSectionHeaderTitle;
}

@property (nonatomic, copy) NSString *sceneSectionHeaderTitle;

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithHome:(id)a0 itemUpdater:(id)a1;

@end
