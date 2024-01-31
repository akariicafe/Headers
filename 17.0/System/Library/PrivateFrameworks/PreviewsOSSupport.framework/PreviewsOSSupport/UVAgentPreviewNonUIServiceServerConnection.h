@class NSString;

@interface UVAgentPreviewNonUIServiceServerConnection : UVBSConnection <UVBSServerConnection, UVAgentPreviewNonUIServiceProtocol>

@property (readonly) int clientPid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activate;
- (oneway void)performUpdate:(id)a0 replyHandler:(id /* block */)a1;
- (oneway void)sendEndpoint:(id)a0 context:(id)a1 contentIdentifier:(id)a2;

@end
