@class NSString, CRKValidXPCConnectionProvider;

@interface CRKBooksServiceProxy : NSObject <CRKBooksServiceInterface>

@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_fetchBooksWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_fetchChaptersWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchBooksWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchChaptersWithRequest:(id)a0 completion:(id /* block */)a1;

@end
