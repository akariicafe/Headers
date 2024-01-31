@class NSString, CDPContext, NSMutableArray, UIViewController;

@interface CDPRemoteValidationEscapeOffer : NSObject <CDPInitUnavailable> {
    NSMutableArray *_escapeOptions;
    CDPContext *_cdpContext;
}

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) NSString *escapeOfferName;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleTelemetryKey;
@property (retain, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *deviceSessionID;
@property (copy, nonatomic) NSString *flowID;

- (void).cxx_destruct;
- (void)handleEscapeAction:(id)a0;
- (id)_actionFromEscapeOption:(id)a0;
- (id)_makeEventForEscapeOfferPresentedWithOptions:(id)a0;
- (id)_makeEventForEscapeOptionSelectedWithKey:(id)a0;
- (void)_performActionForEscapeOption:(id)a0;
- (long long)_styleForEscapeOption:(id)a0;
- (void)addEscapeOptionsObject:(id)a0;
- (void)dismissOfferAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)escapeOptions;
- (id)initWithCDPContext:(id)a0;

@end
