@class NSCountedSet, VKCVisualSearchResultItem, NSString;

@interface VKAnalyticsVisualSearchEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (nonatomic) BOOL didInteractWithResultItem;
@property (retain, nonatomic) NSCountedSet *allItemDomains;
@property (nonatomic) long long itemCount;
@property (nonatomic) long long focalPointItemCount;
@property (retain, nonatomic) VKCVisualSearchResultItem *interactedItem;
@property (nonatomic) double serverProcessingTime;
@property (nonatomic) BOOL serverResultWasCached;
@property (readonly, nonatomic) long long nonFocalPointItemCount;
@property (readonly, nonatomic) NSString *itemDomain;
@property (readonly, nonatomic) BOOL itemHasFocalPoint;

- (id)description;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;
- (id)eventKey;
- (long long)type;
- (id)initWithType:(long long)a0 items:(id)a1 interactedItem:(id)a2 serverProcessingTime:(double)a3 customIdentifier:(id)a4;
- (void)processItems:(id)a0;

@end
