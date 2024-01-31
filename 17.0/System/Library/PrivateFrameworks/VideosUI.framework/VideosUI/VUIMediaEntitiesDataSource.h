@class NSArray, VUIMediaEntityFetchRequest, NSDictionary;

@interface VUIMediaEntitiesDataSource : VUILibraryDataSource

@property (retain, nonatomic) VUIMediaEntityFetchRequest *fetchRequest;
@property (retain, nonatomic) NSArray *mediaEntities;
@property (retain, nonatomic) NSArray *grouping;
@property (nonatomic) BOOL shouldAutoFetchArtworkInfoDictionaries;
@property (nonatomic) BOOL shouldPauseAutoFetchingArtworkInfoDictionaries;
@property (retain, nonatomic) NSDictionary *artworkInfoDictionaryByPurchaseID;

- (id)initWithFetchRequest:(id)a0;
- (void).cxx_destruct;

@end
