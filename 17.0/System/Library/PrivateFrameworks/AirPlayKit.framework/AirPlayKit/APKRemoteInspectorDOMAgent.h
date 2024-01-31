@class NSString;
@protocol APKRemoteInspectorDOMAgentDelegate, APKRemoteInspectorDOMEventDispatcherProtocol;

@interface APKRemoteInspectorDOMAgent : NSObject <RWIProtocolDOMDomainHandler>

@property (readonly, nonatomic) id<APKRemoteInspectorDOMEventDispatcherProtocol> dispatcher;
@property (weak, nonatomic) id<APKRemoteInspectorDOMAgentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDispatcher:(id)a0;
- (void).cxx_destruct;
- (void)getAttributesWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (void)getDocumentWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)getOuterHTMLWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (void)requestChildNodesWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2 depth:(int *)a3;

@end
