@class NSString, TRIClient;

@interface DDSTRIClient : NSObject <DDSTRIClient>

@property (readonly) TRIClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClient:(id)a0;
- (id)levelForFactor:(id)a0 withNamespaceName:(id)a1;
- (void)refresh;
- (id)experimentIdentifiersWithNamespaceName:(id)a0;
- (id)addUpdateHandlerForNamespaceName:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)removeUpdateHandlerForToken:(id)a0;

@end
