@class REMManualOrdering, REMAccountChangeItem;

@interface REMAccountPinnedListsContextChangeItem : NSObject

@property (retain, nonatomic) REMAccountChangeItem *accountChangeItem;
@property (readonly, nonatomic) REMManualOrdering *unsavedManualOrdering;

- (void).cxx_destruct;
- (void)updateManualOrdering:(id)a0;
- (id)initWithAccountChangeItem:(id)a0;

@end
