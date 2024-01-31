@class NSString, SYDocumentAttributes;

@interface SYReturnToDocumentRequest : NSObject <SYDocumentWorkflowsRequestInternal, SYDocumentWorkflowsRequest>

@property (retain, nonatomic) SYDocumentAttributes *documentAttributes;
@property (readonly, nonatomic) NSString *documentIndexKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)verifyParameters;
- (void)performWithServiceProxy:(id)a0 completion:(id /* block */)a1;

@end
