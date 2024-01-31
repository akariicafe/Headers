@class NSString, PXStatusViewModel, PXCPLUIStatusProvider, NSAttributedString;

@interface PXCPLStatusController : NSObject <PXChangeObserver> {
    PXStatusViewModel *_viewModel;
}

@property (retain, nonatomic) PXCPLUIStatusProvider *statusProvider;
@property (copy, nonatomic) NSString *fallbackTitle;
@property (copy, nonatomic) NSString *fallbackMessage;
@property (copy, nonatomic) NSAttributedString *fallbackAttributedMessage;
@property (copy, nonatomic) NSString *fallbackActionTitle;
@property (copy, nonatomic) id /* block */ fallbackAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)_statusProviderDidChange;

@end
