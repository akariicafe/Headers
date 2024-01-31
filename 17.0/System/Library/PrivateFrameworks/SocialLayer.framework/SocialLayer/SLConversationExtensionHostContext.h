@class NSString;

@interface SLConversationExtensionHostContext : NSExtensionContext <SLConversationExtensionHostProtocol>

@property (copy, nonatomic) id /* block */ dismissalRequestHandler;
@property (retain, nonatomic) NSString *messageGUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

@end
