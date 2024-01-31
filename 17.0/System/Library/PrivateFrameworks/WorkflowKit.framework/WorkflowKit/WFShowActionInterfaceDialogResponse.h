@class NSString, NSXPCListenerEndpoint;

@interface WFShowActionInterfaceDialogResponse : WFDialogResponse <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly, nonatomic, getter=isUnsupported) BOOL unsupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCancelled:(BOOL)a0;
- (BOOL)shouldDismissDialogInTransientMode;
- (id)initWithUnsupported:(BOOL)a0;
- (id)initWithListenerEndpoint:(id)a0 userInterfaceType:(id)a1;

@end
