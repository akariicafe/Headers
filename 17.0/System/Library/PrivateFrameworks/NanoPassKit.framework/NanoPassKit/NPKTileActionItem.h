@class PKPassTile, PKPaymentPassAction;

@interface NPKTileActionItem : NSObject

@property (readonly, nonatomic) PKPassTile *tile;
@property (readonly, nonatomic) PKPaymentPassAction *action;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTile:(id)a0 action:(id)a1;

@end
