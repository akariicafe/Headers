@class NSString, ASCLockupView;

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController <ASCLockupViewDelegate>

@property (retain, nonatomic) ASCLockupView *lockupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lockupViewGroup;
+ (id)lockupCache;
+ (id)storeIdentifierForRowModel:(id)a0;
+ (BOOL)supportsRowModel:(id)a0;

- (void)tlk_updateForAppearance:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)setupView;
- (void)lockupViewDidFinishRequest:(id)a0;
- (void)lockupViewDidInvalidateIntrinsicContentSize:(id)a0;
- (id)metricsActivityForLockupView:(id)a0 toPerformActionOfOffer:(id)a1;
- (id)presentingViewControllerForLockupView:(id)a0;

@end
