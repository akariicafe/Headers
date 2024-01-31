@protocol PXPlacesMapLayoutItem;

@interface PXPlacesMapLayoutChange : NSObject

@property (readonly, nonatomic) id<PXPlacesMapLayoutItem> sourceLayoutItem;
@property (readonly, nonatomic) id<PXPlacesMapLayoutItem> targetLayoutItem;
@property (readonly) long long type;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSourceLayoutItem:(id)a0 targetLayoutItem:(id)a1 type:(long long)a2;

@end
