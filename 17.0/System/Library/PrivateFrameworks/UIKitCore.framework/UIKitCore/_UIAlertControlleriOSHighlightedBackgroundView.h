@class NSString, UIVisualEffectView;

@interface _UIAlertControlleriOSHighlightedBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying> {
    UIVisualEffectView *_effectView;
}

@property (readonly, nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPressed:(BOOL)a0;
- (id)init;
- (id)initWithStyle:(long long)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)_configureWithStyle:(long long)a0;
- (void)setRoundedCornerPosition:(unsigned long long)a0;

@end
