@class NSArray, CKMessagePartChatItem;

@interface CKAttributionViewControllerDataModel : NSObject

@property (readonly, nonatomic) long long modelObjectCount;
@property (readonly, nonatomic) CKMessagePartChatItem *chatItem;
@property (readonly, nonatomic) NSArray *modelObjects;

- (void).cxx_destruct;
- (id)_dataModelWithAggregatedObjects:(id)a0;
- (id)_dataModelWithSingleObjects:(id)a0;
- (id)_identifiersToSentItemsMap:(id)a0;
- (long long)_visibleCount:(id)a0;
- (id)initWithMessagePartChatItem:(id)a0;

@end
