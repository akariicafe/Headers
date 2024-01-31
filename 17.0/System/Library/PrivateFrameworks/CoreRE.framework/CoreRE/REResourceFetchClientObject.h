@class NSString;

@interface REResourceFetchClientObject : NSObject <REResourceFetchService>

@property (readonly, nonatomic) void *resourceFetchManager;
@property (readonly, copy, nonatomic) NSString *redactedDescription;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidversion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)associateConnectionWithPeerID:(unsigned long long)a0;
- (id)initWithResourceFetchManager:(void *)a0 connection:(const struct Connection { id x0; } *)a1;
- (void)resourceAtAssetPath:(id)a0 payloadDidUpdate:(id)a1 error:(id)a2;

@end
