@class NSString;
@protocol SXHintsConfigurationOptionProvider, SXDocumentProviding;

@interface SXDOMCacheKeyFactory : NSObject <SXDOMCacheKeyFactory>

@property (readonly, nonatomic) id<SXDocumentProviding> documentProvider;
@property (readonly, nonatomic) id<SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createCacheKeyForLayoutOptions:(id)a0;
- (id)initWithDocumentProvider:(id)a0 hintsConfigurationOptionProvider:(id)a1;

@end
