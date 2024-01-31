@protocol PXActivityCoordinatorItem;

@interface PXActivityCoordinatorRecord : NSObject

@property (weak, nonatomic) id<PXActivityCoordinatorItem> item;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithItem:(id)a0;

@end
