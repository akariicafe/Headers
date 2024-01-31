@class COMeshResponse, COMeshRequest, COMeshNode, NSString;

@interface COMeshControllerQueuedRequest : NSObject <COMeshControllerQueuedElementProtocol>

@property (readonly, nonatomic) COMeshRequest *request;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) COMeshResponse *response;
@property (retain, nonatomic) COMeshNode *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)command;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)invokeCallbackWithError:(id)a0;

@end
