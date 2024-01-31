@interface NewsUI2.TagFeedViewerBarCompressionAnimating : _TtCs12_SwiftObject <TUBarCompressionAnimating> {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ scrollPosition;
    void /* unknown type, empty encoding */ sectionModel;
    void /* unknown type, empty encoding */ percentage;
    void /* unknown type, empty encoding */ mastheadModel;
}

@property (nonatomic, readonly) double topOffset;
@property (nonatomic, readonly) BOOL shouldCompressAtTop;
@property (nonatomic, readonly) BOOL shouldCloseGapOnScroll;

- (double)maximumBarHeightForTraitCollection:(id)a0;
- (void)updateWithPercentage:(double)a0;
- (void)reloadWithTraitCollection:(id)a0;
- (void)scrollViewIsAtTop:(BOOL)a0 offset:(double)a1;
- (void)prepareForUpdates;
- (double)minimumBarHeightForTraitCollection:(id)a0;
- (BOOL)animationShouldBeginForScrollView:(id)a0 currentlyFullyCompressed:(BOOL)a1;

@end
