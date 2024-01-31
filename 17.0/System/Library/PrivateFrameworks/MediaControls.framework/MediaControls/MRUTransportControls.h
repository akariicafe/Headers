@class MRUTransportControlItem;

@interface MRUTransportControls : NSObject

@property (readonly, nonatomic) MRUTransportControlItem *leadingItem;
@property (readonly, nonatomic) MRUTransportControlItem *leftItem;
@property (readonly, nonatomic) MRUTransportControlItem *centerItem;
@property (readonly, nonatomic) MRUTransportControlItem *rightItem;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)centerItemFromResponse:(id)a0;
- (id)initWithMPCResponse:(id)a0;
- (id)leadingItemFromResponse:(id)a0;
- (id)leftItemFromResponse:(id)a0;
- (id)rightItemFromResponse:(id)a0;

@end
