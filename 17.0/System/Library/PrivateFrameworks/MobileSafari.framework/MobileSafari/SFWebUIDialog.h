@class WebUIAlert;

@interface SFWebUIDialog : SFDialog {
    int _finalAction;
    id /* block */ _completionHandler;
    BOOL _shouldIgnoreGlobalModalUIDisplayPolicy;
}

@property (readonly, nonatomic) WebUIAlert *alert;

- (long long)presentationStyle;
- (void).cxx_destruct;
- (void)didCompleteWithResponse:(id)a0;
- (id)initWithAlert:(id)a0 completionHandler:(id /* block */)a1;
- (id)newViewControllerRepresentationWithCompletionHandler:(id /* block */)a0;
- (BOOL)shouldIgnoreGlobalModalUIDisplayPolicy;

@end
