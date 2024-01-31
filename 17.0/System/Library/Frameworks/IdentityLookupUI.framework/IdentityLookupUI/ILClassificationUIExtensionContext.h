@class NSString;

@interface ILClassificationUIExtensionContext : NSExtensionContext <ILClassificationUIExtensionVendorProtocol>

@property (nonatomic, getter=isReadyForClassificationResponse) BOOL readyForClassificationResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

@end
