@class PXPersonItem;

@interface PXPeopleMetricsActionQueueItem : NSObject

@property long long itemType;
@property (readonly, nonatomic) PXPersonItem *person;

- (void).cxx_destruct;
- (id)initWithItemType:(long long)a0 andPerson:(id)a1;

@end
