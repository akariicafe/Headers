@class NSOperationQueue, SUUIRedeemConfiguration, SUUIClientContext;
@protocol SUUIRedeemStepDelegate;

@interface SUUIRedeemStepViewController : UIViewController

@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (retain, nonatomic) SUUIRedeemConfiguration *configuration;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) BOOL shouldShowPassbookLearnMore;
@property (weak, nonatomic) id<SUUIRedeemStepDelegate> redeemStepDelegate;

- (void).cxx_destruct;

@end
