@class NSString, SYDocumentAttributes, SYDocument;

@interface SYReturnToSenderRequest : NSObject <SYDocumentWorkflowsRequestInternal, SYDocumentWorkflowsRequest>

@property (retain, nonatomic) SYDocumentAttributes *storedDocumentAttributes;
@property (retain, nonatomic) SYDocument *document;
@property (nonatomic) BOOL shouldCreateNewMessage;
@property (readonly, nonatomic) NSString *documentIndexKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
