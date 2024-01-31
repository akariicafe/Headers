@class NSString;

@interface REResourceFetchServer : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) void *resourceFetchManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithResourceFetchManager:(void *)a0;

@end
