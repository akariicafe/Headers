@class NSString, FPSandboxingURLWrapper, NSURL, _UIOverlayService, _UIOServiceConnection, FBSSceneIdentityToken;

@interface _UINavigationBarTitleRenamerRemoteSession : _UINavigationBarTitleRenamerSession <_UIOverlayServiceDelegate, _UIOServiceConnectionObserver, BSXPCSecureCoding> {
    unsigned long long _currentState;
}

@property (readonly, nonatomic) FPSandboxingURLWrapper *urlWrapper;
@property (readonly, nonatomic) FBSSceneIdentityToken *sceneOriginIdentityToken;
@property (readonly, nonatomic) _UIOverlayService *overlayService;
@property (retain, nonatomic) _UIOServiceConnection *connection;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)sessionDidEnd;
- (void)dealloc;
- (id)initWithBSXPCCoder:(id)a0;
- (void)overlayServiceDidInvalidate:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)_client_cancelSessionAndNotify:(BOOL)a0;
- (void)_server_cancelSessionAndNotify:(BOOL)a0;
- (void)fileRenameDidFail:(id)a0 proposedName:(id)a1;
- (void)serviceConnectionDidInvalidate:(id)a0;
- (void)_attemptLocalRenameForFileURL:(id)a0 proposedName:(id)a1 completionHandler:(id /* block */)a2;
- (void)_client_fileRenameDidEnd:(id)a0;
- (void)_client_fileRenameDidFail:(id)a0 proposedName:(id)a1;
- (void)_client_sessionDidEnd;
- (void)_client_sessionDidStartInRenamer:(id)a0;
- (void)_client_textFieldDidEndEditingWithText:(id)a0;
- (BOOL)_client_textFieldShouldEndEditingWithText:(id)a0;
- (id)_client_willBeginRenamingWithText:(id)a0 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)_isServerSide;
- (void)_server_fileRenameDidEnd:(id)a0;
- (void)_server_fileRenameDidFail:(id)a0 proposedName:(id)a1;
- (void)_server_sessionDidEnd;
- (void)_server_sessionDidStartInRenamer:(id)a0;
- (void)_server_textFieldDidEndEditingWithText:(id)a0;
- (BOOL)_server_textFieldShouldEndEditingWithText:(id)a0;
- (id)_server_willBeginRenamingWithText:(id)a0 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)_textFieldDidEndEditingWithText:(id)a0;
- (BOOL)_textFieldShouldEndEditingWithText:(id)a0;
- (void)_updateSessionWithAction:(long long)a0;
- (id)_willBeginRenamingWithText:(id)a0 selectedRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)cancelSession;
- (void)cancelSessionAndNotify:(BOOL)a0;
- (id)createRenamerContentView;
- (void)fileRenameDidEnd:(id)a0;
- (id)initWithFileURL:(id)a0 iconMetadata:(id)a1 error:(id *)a2 scene:(id)a3;
- (id)initWithSuggestedTitle:(id)a0 iconMetadata:(id)a1 scene:(id)a2;
- (void)sessionDidStartInRenamer:(id)a0;

@end
