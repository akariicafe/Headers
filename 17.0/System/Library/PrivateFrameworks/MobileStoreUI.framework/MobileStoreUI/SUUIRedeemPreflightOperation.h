@class SUUIClientContext, NSString, SUUIRedeemConfiguration, NSObject, SUUIRedeemViewControllerLegacy;
@protocol OS_dispatch_queue;

@interface SUUIRedeemPreflightOperation : NSOperation {
    SUUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _loadsRedeemCodeMetadata;
    id /* block */ _outputBlock;
    NSString *_redeemCode;
    SUUIRedeemConfiguration *_redeemConfiguration;
}

@property (nonatomic) BOOL forcesAuthentication;
@property BOOL loadsRedeemCodeMetadata;
@property (weak, nonatomic) SUUIRedeemViewControllerLegacy *redeemViewController;
@property (retain) SUUIRedeemConfiguration *redeemConfiguration;
@property (copy) id /* block */ outputBlock;

- (id)init;
- (void)main;
- (void).cxx_destruct;
- (id)_authenticationContext;
- (id)_redeemCodeMetadataWithClientContext:(id)a0;
- (id)initWithClientContext:(id)a0 redeemCode:(id)a1 forcesAuthentication:(BOOL)a2;
- (id)_initSUUIRedeemPreflightOperation;

@end
