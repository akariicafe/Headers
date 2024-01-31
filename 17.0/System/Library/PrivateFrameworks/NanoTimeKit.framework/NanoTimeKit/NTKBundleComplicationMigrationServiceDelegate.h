@class NSString;

@interface NTKBundleComplicationMigrationServiceDelegate : NSObject <NSXPCListenerDelegate>

@property (nonatomic) BOOL requireEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
