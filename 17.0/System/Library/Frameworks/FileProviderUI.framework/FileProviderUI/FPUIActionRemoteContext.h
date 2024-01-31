@class NSString;
@protocol FPUIActionRemoteContextDelegate;

@interface FPUIActionRemoteContext : NSExtensionContext <FPUIActionRemoteContextProtocol>

@property (weak, nonatomic) id<FPUIActionRemoteContextDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

@end
