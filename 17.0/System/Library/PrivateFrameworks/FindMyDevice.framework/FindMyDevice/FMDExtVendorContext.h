@class NSString;
@protocol FMDExtAccessoryProtocol;

@interface FMDExtVendorContext : FMDExtensionContext <FMDExtAccessoryProtocol>

@property (retain, nonatomic) id<FMDExtAccessoryProtocol> accessoryProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)connectionStatusForAccessory:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchAllAccessoriesInfo:(id)a0 withCompletion:(id /* block */)a1;
- (void)getStyleForAccessory:(id)a0 info:(id)a1 withCompletion:(id /* block */)a2;
- (void)safetyAlertForAccessory:(id)a0 info:(id)a1 withCompletion:(id /* block */)a2;

@end
