@class NSString, MPCMediaRemoteController;

@interface MPCMediaRemoteArtworkRemoteDataSource : NSObject <MPArtworkDataSource>

@property (readonly, weak, nonatomic) MPCMediaRemoteController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (id)initWithController:(id)a0;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (void).cxx_destruct;
- (id)existingRepresentationForArtworkCatalog:(id)a0;

@end
