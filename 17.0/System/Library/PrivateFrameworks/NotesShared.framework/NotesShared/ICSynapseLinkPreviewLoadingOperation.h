@class SYContentItem;

@interface ICSynapseLinkPreviewLoadingOperation : NSObject {
    SYContentItem *_synapseItem;
    id /* block */ _completionBlock;
}

- (void).cxx_destruct;
- (void)loadPreviewWithCompletionBlock:(id /* block */)a0;
- (id)initWithSynapseItem:(id)a0;
- (void)linkPreviewDidFinishLoading:(id)a0;

@end
