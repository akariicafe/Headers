@class NSString;

@interface ICDocCamExtractedDocumentNavigationController : UINavigationController <DCUnsavedDataDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)didReceiveMemoryWarning;
- (void)prepareForDismissal;
- (id)initWithDelegate:(id)a0 documentInfoCollection:(id)a1 imageCache:(id)a2 currentIndex:(long long)a3 mode:(int)a4;

@end
