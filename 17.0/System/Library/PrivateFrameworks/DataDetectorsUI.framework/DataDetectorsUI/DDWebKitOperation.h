@class DOMNode, WebFrame;

@interface DDWebKitOperation : DDOperation

@property (retain, nonatomic) DOMNode *startNode;
@property int startOffset;
@property (retain, nonatomic) DOMNode *endNode;
@property int endOffset;
@property (retain, nonatomic) WebFrame *container;

- (void)cleanup;
- (void).cxx_destruct;
- (void)_applyContainerRestrictionsToTypes;
- (BOOL)_containerReadyForDetection;
- (struct __DDScanQuery { } *)_createScanQueryForBackend;
- (BOOL)_rangeValidForContainer;
- (void)_updateGenerationNumber;
- (BOOL)containerIsReady;
- (void)dispatchContainerModificationBlock:(id /* block */)a0;
- (BOOL)doURLificationOnDocument;
- (BOOL)needsToStartOver;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;

@end
