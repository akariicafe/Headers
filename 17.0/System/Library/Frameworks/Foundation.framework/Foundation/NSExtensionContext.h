@class NSXPCListener, NSUUID, NSArray, NSXPCConnection, NSString, NSObject;
@protocol _NSExtensionContextVending, OS_os_transaction, _NSExtensionContextHosting;

@interface NSExtensionContext : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *_UUID;
@property (copy, nonatomic, setter=_setRequestCleanUpBlock:) id /* block */ _requestCleanUpBlock;
@property (copy, nonatomic, setter=_setInputItems:) NSArray *inputItems;
@property (retain, setter=_setExtensionHostProxy:) id<_NSExtensionContextHosting> _extensionHostProxy;
@property (retain, nonatomic, setter=_setExtensionVendorProxy:) id<_NSExtensionContextVending> _extensionVendorProxy;
@property (retain, nonatomic, setter=_setAuxiliaryConnection:) NSXPCConnection *_auxiliaryConnection;
@property (retain, nonatomic, setter=_setAuxiliaryListener:) NSXPCListener *_auxiliaryListener;
@property (retain, setter=_setProcessAssertion:) id _processAssertion;
@property (nonatomic, setter=_setPrincipalObject:) id _principalObject;
@property (nonatomic, getter=_isDummyExtension, setter=_setDummyExtension:) BOOL _dummyExtension;
@property (retain, getter=_transaction, setter=_setTransaction:) NSObject<OS_os_transaction> *_transaction;
@property (setter=_setExtensionHostAuditToken:) struct { unsigned int x0[8]; } _extensionHostAuditToken;
@property (readonly, retain) id internalImplementation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_defaultExtensionContextVendorProtocol;
+ (id)_extensionContextForIdentifier:(id)a0;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_allowedErrorClasses;
+ (id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)a0;
+ (id)_extensionContextHostProtocolWithAllowedErrorClasses:(id)a0;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_defaultExtensionContextProtocol;

- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_willPerformHostCallback:(id /* block */)a0;
- (id)init;
- (void)___nsx_pingHost:(id /* block */)a0;
- (void)dealloc;
- (BOOL)_isHost;
- (void)encodeWithCoder:(id)a0;
- (void)set_UUID:(id)a0;
- (void)invalidate;
- (id)_processAssertion;
- (id)_auxiliaryConnection;
- (id)_extensionHostProxy;
- (void)_loadPreviewImageForPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)_openURL:(id)a0 completion:(id /* block */)a1;
- (id)_auxiliaryListener;
- (id)_extensionVendorProxy;
- (id)initWithInputItems:(id)a0 contextUUID:(id)a1;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (id)inputItems;
- (id)initWithInputItems:(id)a0;
- (void)setInputItems:(id)a0;
- (id)_UUID;
- (id)_principalObject;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelRequestWithError:(id)a0;
- (void)_loadItemForPayload:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)_requestCleanUpBlock;
- (void)completeRequestReturningItems:(id)a0;
- (void)completeRequestReturningItems:(id)a0 expirationHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)didConnectToVendor:(id)a0;
- (void)openURL:(id)a0 completion:(id /* block */)a1;

@end
