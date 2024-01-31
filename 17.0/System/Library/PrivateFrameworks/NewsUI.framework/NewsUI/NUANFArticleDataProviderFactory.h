@class NSString, NULinkedContentManagerFactory;
@protocol NUFontRegistration, FCContentContext, NUEmbedDataManager, SXHost;

@interface NUANFArticleDataProviderFactory : NSObject <NUArticleDataProviderFactory>

@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) id<NUFontRegistration> fontRegistration;
@property (readonly, nonatomic) id<SXHost> host;
@property (readonly, nonatomic) id<NUEmbedDataManager> embedDataManager;
@property (readonly, nonatomic) NULinkedContentManagerFactory *linkedContentManagerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createArticleDataProviderWithArticle:(id)a0;
- (id)initWithContentContext:(id)a0 fontRegistration:(id)a1 host:(id)a2 embedDataManager:(id)a3 linkedContentManagerFactory:(id)a4;

@end
