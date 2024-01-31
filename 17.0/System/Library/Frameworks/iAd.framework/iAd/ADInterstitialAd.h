@interface ADInterstitialAd : NSObject

@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, nonatomic, getter=isActionInProgress) BOOL actionInProgress;

- (void)cancelAction;
- (void).cxx_destruct;
- (void)presentFromViewController:(id)a0;
- (BOOL)presentInView:(id)a0;

@end
