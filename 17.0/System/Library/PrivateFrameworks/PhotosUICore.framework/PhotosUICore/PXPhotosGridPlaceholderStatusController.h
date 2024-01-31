@class PXStatusController, NSString, PXCPLUIStatusProvider, NSAttributedString, PXCPLStatusController;

@interface PXPhotosGridPlaceholderStatusController : NSObject {
    BOOL _presentCPLStatus;
    NSString *_fallbackTitle;
    NSAttributedString *_fallbackAttributedMessage;
    PXStatusController *_statusController;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
    PXCPLStatusController *_cplStatusController;
}

@property (readonly, nonatomic) PXStatusController *statusController;

- (id)init;
- (void).cxx_destruct;
- (id)initForPresentingCPLStatus:(BOOL)a0 fallbackTitle:(id)a1 fallbackAttributedMessage:(id)a2;

@end
