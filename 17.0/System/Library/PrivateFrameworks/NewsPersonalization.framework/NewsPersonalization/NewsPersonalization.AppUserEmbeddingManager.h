@interface NewsPersonalization.AppUserEmbeddingManager : NSObject <NPUserEmbeddingGeneratorType> {
    void /* unknown type, empty encoding */ sessionDataProvider;
    void /* unknown type, empty encoding */ userEmbeddingManager;
    void /* unknown type, empty encoding */ userEmbeddingConfigurationService;
}

- (void)generateUserEmbeddingIfNeededWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
