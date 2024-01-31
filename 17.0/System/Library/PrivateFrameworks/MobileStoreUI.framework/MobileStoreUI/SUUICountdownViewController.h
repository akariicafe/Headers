@class SUUICountdownComponent, SUUIClientContext, NSString, SUUIResourceLoader;

@interface SUUICountdownViewController : UIViewController <SUUIArtworkRequestDelegate>

@property (readonly, nonatomic) SUUIResourceLoader *artworkLoader;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (readonly, nonatomic) SUUICountdownComponent *countdownComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)initWithCountdownComponent:(id)a0 artworkLoader:(id)a1;

@end
