@class NSString;

@interface PDSXPCAdapter : NSObject <PDSXPCInterfaceVendor, PDSXPCConnectionVendor>

@property (class, nonatomic) BOOL disableXPC;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultConnectionVendor;
+ (id)_sharedInstance;
+ (id)defaultInterfaceVendor;

- (id)_init;
- (id)connectionForMachService:(id)a0;
- (id)interfaceWithProtocol:(id)a0;

@end
