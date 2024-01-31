@class NSString, SFButtonItem;

@interface SearchUIHeroButton : UIButton <SearchUICommandButton>

@property (retain) SFButtonItem *buttonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)newButtonsEnabled;

- (void)tlk_updateForAppearance:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithTitle:(id)a0 image:(id)a1 command:(id)a2;
- (void)updateWithTitle:(id)a0 image:(id)a1;

@end
