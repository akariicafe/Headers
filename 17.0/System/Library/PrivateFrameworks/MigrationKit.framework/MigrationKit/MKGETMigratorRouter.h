@class NSString, NSHashTable;

@interface MKGETMigratorRouter : NSObject <MKHTTPRouter>

@property (weak, nonatomic) NSHashTable *migrators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)keyFromMigratorType:(long long)a0;
- (void)server:(id)a0 didReceiveRequest:(id)a1 response:(id)a2;

@end
