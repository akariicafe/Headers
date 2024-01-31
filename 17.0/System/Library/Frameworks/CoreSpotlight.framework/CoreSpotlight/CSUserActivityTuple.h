@class NSString, CSSearchableItem, CSUserAction;

@interface CSUserActivityTuple : NSObject <CSIndexQueuableItem>

@property (retain) CSUserAction *action;
@property (retain) CSSearchableItem *item;
@property (retain) NSString *protectionClass;

- (id)initWithAction:(id)a0 item:(id)a1;
- (void)updateWithItem:(id)a0;
- (id)searchableItem;
- (id)description;
- (void).cxx_destruct;

@end
