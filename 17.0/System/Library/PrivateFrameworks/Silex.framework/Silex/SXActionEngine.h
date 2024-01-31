@class NSString, NSMutableDictionary;

@interface SXActionEngine : NSObject <SXActionProvider>

@property (readonly, nonatomic) NSMutableDictionary *additionFactories;
@property (readonly, nonatomic) NSMutableDictionary *hostNameFactories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)actionForAddition:(id)a0;
- (id)actionForURL:(id)a0;
- (void)registerFactory:(id)a0 URLHost:(id)a1;
- (void)registerFactory:(id)a0 additionType:(Class)a1;

@end
