@interface PXForYouSettingAdvisoryGadgetFeedConfiguration : PXFeedConfiguration

- (id)init;
- (BOOL)allowsPopOnEmptyBehavior;
- (unsigned long long)gadgetType;
- (id)gadgetAccessoryButtonLocalizedTitle;
- (unsigned long long)gadgetAccessoryButtonType;
- (id)gadgetLocalizedTitle;
- (long long)horizontalGadgetStyle;
- (BOOL)wantsEmbeddedScrollView;
- (BOOL)wantsMultilineGadgetTitle;

@end
