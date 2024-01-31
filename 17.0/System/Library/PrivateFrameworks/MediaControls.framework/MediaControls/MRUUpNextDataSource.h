@class NSDictionary, MPCPlayerResponse, NSArray;
@protocol MRUUpNextDataSourceDelegate;

@interface MRUUpNextDataSource : NSObject

@property (retain, nonatomic) NSDictionary *responseItemsByIdentifier;
@property (retain, nonatomic) MPCPlayerResponse *response;
@property (weak, nonatomic) id<MRUUpNextDataSourceDelegate> delegate;
@property (readonly, nonatomic) NSArray *responseItemIDs;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)canMoveResponseItemWithIdentifier:(id)a0;
- (void)moveReponseItemToNextWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)moveReponseItemWithIdentifier:(id)a0 afterResponseItemWithIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)playItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeResponseItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)responseItemForIdentifier:(id)a0;
- (void)updateContentItems;

@end
