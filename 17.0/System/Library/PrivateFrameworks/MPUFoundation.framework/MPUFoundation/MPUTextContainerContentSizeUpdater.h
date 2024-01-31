@class NSString;
@protocol MPUTextContainer;

@interface MPUTextContainerContentSizeUpdater : NSObject

@property (retain, nonatomic) NSString *lastSeenPreferredContentSizeCategory;
@property (weak, nonatomic) id<MPUTextContainer> textContainer;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_preferredContentSizeCategoryDidChange:(id)a0;
- (void)_updateTextStyleFonts;
- (void)ensureTextStyleFontsMatchPreferredTextStyleFonts;

@end
