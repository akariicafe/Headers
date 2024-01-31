@interface SKUIStorePageDataConsumer : SSVURLDataConsumer

@property (nonatomic) Class storePageClass;

- (id)init;
- (id)objectForData:(id)a0 response:(id)a1 error:(id *)a2;
- (id)_artistPageComponentsForDictionary:(id)a0 items:(id)a1;
- (id)_backgroundArtworkWithDictionary:(id)a0;
- (id)_bannerRoomComponentsForDictionary:(id)a0 items:(id)a1;
- (id)_customPageComponentsForDictionary:(id)a0 items:(id)a1;
- (id)_groupingPageComponentsForDictionary:(id)a0 items:(id)a1;
- (id)_multiRoomComponentsForDictionary:(id)a0 items:(id)a1;
- (id)_newCustomPageComponentForBlockType:(id)a0 context:(id)a1;
- (id)_newFeaturedContentComponentForKind:(long long)a0 context:(id)a1;
- (id)_newPageComponentContextWithDictionary:(id)a0;
- (id)_roomComponentsForDictionary:(id)a0 items:(id)a1 gridType:(long long)a2;
- (id)storePageWithDictionary:(id)a0;
- (id)storePageWithDictionary:(id)a0 response:(id)a1;

@end
