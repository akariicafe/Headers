@class NSArray, NSSet, NSMutableDictionary;

@interface TrackedMessageListItems : NSObject {
    NSMutableDictionary *_trackedItems;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *itemIDs;
@property (readonly, nonatomic) NSSet *itemIDsSet;
@property (readonly, nonatomic) NSArray *messageListItems;

- (id)init;
- (void).cxx_destruct;
- (void)trackMessageListItemWithItemID:(id)a0;
- (BOOL)hasMessageListItemForItemID:(id)a0;
- (void)trackmessageListItem:(id)a0;
- (void)untrackAllMessageListItems;
- (void)untrackMessageListItemWithItemID:(id)a0;
- (void)untrackMessageListItemsWithItemIDs:(id)a0;
- (void)updateMessageListItem:(id)a0;

@end
