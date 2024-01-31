@class NSString, PKDashboardMessageRowItem;
@protocol PKDashboardMessageSectionControllerDelegate;

@interface PKDashboardMessageSectionController : PKDynamicListSectionController <PKDashboardMessagesViewDelegate> {
    PKDashboardMessageRowItem *_item;
}

@property (readonly, weak, nonatomic) id<PKDashboardMessageSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiers;
- (void).cxx_destruct;
- (void)_decorateCell:(id)a0 forItem:(id)a1;
- (id)cellRegistrationForItem:(id)a0;
- (id)initWithMessages:(id)a0 delegate:(id)a1;
- (void)messagesView:(id)a0 scrolledToMessageWithIdentifier:(id)a1;
- (BOOL)messagesView:(id)a0 shouldEnqueueEventForView:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (void)updateWithMessages:(id)a0 currentMessageIndex:(unsigned long long)a1;

@end
