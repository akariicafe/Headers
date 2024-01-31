@class NSArray, TLKAppearance, SearchUIColorRequest;

@interface SearchUIResolvedBackgroundColoring : NSObject

@property (retain) NSArray *tintedUIColors;
@property (retain) NSArray *originalUIColors;
@property (retain) TLKAppearance *bestForegroundAppearanceForBackgroundColors;
@property (retain) SearchUIColorRequest *colorRequest;
@property BOOL preferKeylineForShadowBasedViews;
@property int tintStyle;

- (void).cxx_destruct;

@end
