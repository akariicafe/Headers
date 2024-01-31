@interface SPUITapToRadarView : NUIContainerBoxView

+ (BOOL)shouldDisplayTapToRadar;
+ (void)openTapToRadarWithQuery:(id)a0 sections:(id)a1 rankingDebugLog:(id)a2;
+ (id)generateComponentQueryItems;

- (void)updateImage;
- (id)initWithTarget:(id)a0 action:(SEL)a1;

@end
