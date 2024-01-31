@class NSMutableArray, UIUpdateItem;

@interface UITableViewUpdateGap : NSObject {
    NSMutableArray *_deleteItems;
    NSMutableArray *_insertItems;
    struct { unsigned char hasAutomaticAnimationItems : 1; } _gapFlags;
    UIUpdateItem *_firstUpdateItem;
    UIUpdateItem *_lastUpdateItem;
}

- (id)description;
- (void).cxx_destruct;

@end
