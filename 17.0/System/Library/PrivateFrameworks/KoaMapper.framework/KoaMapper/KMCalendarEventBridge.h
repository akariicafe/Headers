@class NSString, KVItemMapper, EKEventStore;

@interface KMCalendarEventBridge : NSObject <KMProviderDatasetBridge> {
    KVItemMapper *_itemMapper;
}

@property (retain, nonatomic) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)itemType;
- (id)init;
- (void).cxx_destruct;
- (id)originAppId;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;

@end
