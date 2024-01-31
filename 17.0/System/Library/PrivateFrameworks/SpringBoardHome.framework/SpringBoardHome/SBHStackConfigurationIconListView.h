@protocol SBIconViewDelegate;

@interface SBHStackConfigurationIconListView : SBIconListView

@property (weak, nonatomic) id<SBIconViewDelegate> iconViewDelegate;

- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (void)_setupCustomBackgroundConfigurationForIconView:(id)a0;
- (void).cxx_destruct;
- (Class)baseIconViewClass;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
