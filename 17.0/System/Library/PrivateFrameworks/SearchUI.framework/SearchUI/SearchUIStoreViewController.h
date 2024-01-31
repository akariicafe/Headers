@class NSString;
@protocol SFFeedbackListener;

@interface SearchUIStoreViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate>

@property (weak) id<SFFeedbackListener> feedbackListener;
@property unsigned long long queryId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)productViewController:(id)a0 didFinishWithResult:(long long)a1;
- (id)initWithIdentifier:(id)a0 feedbackListener:(id)a1 queryId:(unsigned long long)a2;

@end
