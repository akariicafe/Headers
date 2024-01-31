@class SHCustomCatalogConfiguration, SHCustomCatalogContainer, NSData;

@interface SHCustomCatalog : SHCatalog

@property (readonly, copy, nonatomic) SHCustomCatalogConfiguration *_configuration;
@property (readonly, nonatomic) SHCustomCatalogContainer *customCatalogContainer;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)new;

- (id)init;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (id)_createMatcher;
- (id)_customCatalogConfiguration;
- (BOOL)addCustomCatalog:(id)a0 error:(id *)a1;
- (BOOL)addCustomCatalogDataRepresentation:(id)a0 error:(id *)a1;
- (BOOL)addCustomCatalogFromURL:(id)a0 error:(id *)a1;
- (BOOL)addReferenceSignature:(id)a0 representingMediaItems:(id)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 dataRepresentation:(id)a1 error:(id *)a2;

@end
