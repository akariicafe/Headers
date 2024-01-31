@class NSString, NSArray;

@interface EKEventAttachmentDetailItem : EKEventDetailItem <EKEventAttachmentCellControllerDelegate> {
    NSArray *_cellControllers;
    BOOL _visibilityChanged;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)_setUpCellControllers;
- (id)owningEventForAttachmentCellController:(id)a0;
- (void)reset;
- (void)dealloc;
- (unsigned long long)numberOfSubitems;
- (void)eventViewController:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (id)parentViewControllerForAttachmentCellController:(id)a0;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setEvent:(id)a0 store:(id)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)detailItemVisibilityChanged;
- (void)_cleanUpCellControllers;

@end
