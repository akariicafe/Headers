@class NSString;

@interface PXGridTipsHelper : PXTipsHelper

@property (class, readonly, nonatomic) NSString *curatedLibrarySwitchTipID;
@property (class, readonly, nonatomic) NSString *syndicatedAssetsTipID;

+ (void)setTip:(id)a0 isPresentable:(BOOL)a1;
+ (void)setTipActionPerformed:(id)a0;
+ (void)setTipsPresentationDelegate:(id)a0;
+ (void)updatePopoverTip:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
