@protocol QLPreviewItemViewControllerDelegate;

@interface QLCustomMessageForwarder : NSObject {
    id<QLPreviewItemViewControllerDelegate> _previewDelegate;
}

- (void).cxx_destruct;
- (void)forwardMessageToHostOfCustomViewController:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithPreviewDelegate:(id)a0;

@end
