@interface TeaUI.TabBarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating> {
    void /* unknown type, empty encoding */ tabBar;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ topOffset;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldCompressAtTop;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ shouldCloseGapOnScroll;

- (double)maximumBarHeightForTraitCollection:(id)a0;
- (id)init;
- (void)updateWithPercentage:(double)a0;
- (void)reloadWithTraitCollection:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewIsAtTop:(BOOL)a0 offset:(double)a1;
- (void)prepareForUpdates;
- (double)minimumBarHeightForTraitCollection:(id)a0;
- (BOOL)animationShouldBeginForScrollView:(id)a0 currentlyFullyCompressed:(BOOL)a1;

@end
