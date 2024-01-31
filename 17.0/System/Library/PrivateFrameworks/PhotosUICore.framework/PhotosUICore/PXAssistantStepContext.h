@class NSString, UIViewController;

@interface PXAssistantStepContext : PXObservable

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long firstButtonType;
@property (readonly, copy, nonatomic) NSString *firstButtonTitle;
@property (readonly, nonatomic) BOOL firstButtonEnabled;
@property (readonly, nonatomic) long long secondButtonType;
@property (readonly, copy, nonatomic) NSString *customSecondButtonTitle;
@property (readonly, nonatomic) BOOL secondButtonEnabled;
@property (readonly, nonatomic) BOOL useTransparentBarAppearance;

- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setUseTransparentBarAppearance:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 viewController:(id)a1;
- (void)setCustomSecondButtonTitle:(id)a0;
- (void)setFirstButtonEnabled:(BOOL)a0;
- (void)setFirstButtonTitle:(id)a0;
- (void)setFirstButtonType:(long long)a0;
- (void)setSecondButtonEnabled:(BOOL)a0;
- (void)setSecondButtonType:(long long)a0;

@end
