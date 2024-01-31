@class NSMapTable;

@interface HFBiomeUsageCountsFetchRequest : HFBiomeAbstractFetchRequest

@property (retain) NSMapTable *usageCountByAccessoryRepresentable;
@property (retain) NSMapTable *accessoryRepresentablesByUniqueIdentifier;
@property (copy, nonatomic) id /* block */ filter;

- (void).cxx_destruct;
- (id)successHandler;
- (id)initWithHome:(id)a0;
- (id)_accessoryRepresentableWithUniqueIdentifierString:(id)a0 uniqueIdentifierToAccessoryRepesentableBlock:(id /* block */)a1;
- (void)_incrementUsageCountForAccessoryRepresentable:(id)a0;
- (void)eventHandler:(id)a0;

@end
