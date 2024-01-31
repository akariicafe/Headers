@class NSUUID, NSString, NSExtension, NSURL, NSArray, UIImage, NSDictionary, MEMailComposeToolbarItemInfo, MEExtensionHostContext, EFPromise, MERemoteExtensionContext, NSObject;
@protocol MEContentBlocker_Private, MEComposeSessionHandler_Private, MEMessageSecurityHandler, MEMessageActionHandler_Private, OS_dispatch_queue, MEComposeSessionHandler;

@interface MERemoteExtension : NSObject <EFPubliclyDescribable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _remoteExtensionProxyLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLevelLock;
    NSString *_dataAccessReason;
    unsigned long long _bodyAccess;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionLoadingQueue;
@property (retain, nonatomic) NSString *containerPath;
@property (retain, nonatomic) NSString *containerID;
@property (retain, nonatomic) NSString *extensionID;
@property (nonatomic) BOOL entitlementVerified;
@property (retain, nonatomic) EFPromise *remoteExtensionProxyPromise;
@property (readonly, nonatomic) MERemoteExtensionContext *extensionContext;
@property (readonly) MEExtensionHostContext *extensionHostContext;
@property (readonly) NSUUID *contextUUID;
@property (readonly, copy) NSString *dataAccessReason;
@property (readonly, copy) NSDictionary *headerAccessLevels;
@property (readonly) BOOL bodyAccess;
@property (readonly) BOOL hasMessageContentAccess;
@property (readonly, nonatomic) id<MEComposeSessionHandler_Private> synchronousComposeSessionInterface;
@property (readonly, nonatomic) id<MEMessageSecurityHandler> synchronousMessageSecurityInterface;
@property (readonly, nonatomic) id<MEMessageActionHandler_Private> synchronousMessageActionProviderInterface;
@property (readonly, nonatomic) id<MEContentBlocker_Private> synchronousContentBlockerInterface;
@property (readonly, nonatomic) id<MEMessageActionHandler_Private> messageActionProviderInterface;
@property (readonly, nonatomic) id<MEComposeSessionHandler> composeSessionInterface;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *displayVersion;
@property (readonly, nonatomic) NSString *containingAppDisplayName;
@property (readonly, nonatomic) NSURL *containingAppURL;
@property (readonly, nonatomic) NSString *descriptionText;
@property (nonatomic, setter=setEnabled:) BOOL isEnabled;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) BOOL outboundNetworkingAllowed;
@property (readonly, nonatomic) BOOL inboundNetworkingAllowed;
@property (readonly, nonatomic) UIImage *preferencesIcon;
@property (readonly, nonatomic) UIImage *menuIcon;
@property (readonly, nonatomic) UIImage *toolbarIcon;
@property (readonly, nonatomic) UIImage *messageSecurityDecoderIcon;
@property (readonly, nonatomic) MEMailComposeToolbarItemInfo *composeWindowToolbarButtonInfo;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;
+ (id)allCapabilities;
+ (id)allCapabilitiesRequiringMessageContentAccess;

- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_imageForName:(id)a0;
- (id)_interfaceForExtensionCapability:(id)a0;
- (id)_loadRemoteExtesionProxyFuture;
- (void)_nts_loadBodyAccess;
- (void)_nts_loadDataAccessReason;
- (id)_remoteExtensionProxyFuture;
- (id)_synchronousInterfaceForExtensionCapability:(id)a0;
- (id)contentBlockerInterface;
- (void)getDecodedMailViewControllerForMessageContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)getMailComposeExtensionViewControllerForSession:(id)a0 hostDelegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)getMailSignatureVerificationExtensionViewControllerForMessageSigners:(id)a0 completionHandler:(id /* block */)a1;
- (id)interfaceForExtensionCapability:(id)a0;
- (void)primaryActionClickedForMessageContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)toolbarIconTooltip;

@end
