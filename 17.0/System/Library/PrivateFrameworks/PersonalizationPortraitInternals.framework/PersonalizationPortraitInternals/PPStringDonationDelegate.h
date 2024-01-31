@class NSString;

@interface PPStringDonationDelegate : NSObject <NSXPCListenerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
