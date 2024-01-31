@class REMListBadge, NSString, REMListChangeItem;

@interface REMListAppearanceContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (copy, nonatomic) REMListBadge *badge;
@property (copy, nonatomic) NSString *badgeEmblem;

- (void)setShowingLargeAttachments:(BOOL)a0;
- (BOOL)showingLargeAttachments;
- (void).cxx_destruct;
- (id)initWithListChangeItem:(id)a0;

@end
