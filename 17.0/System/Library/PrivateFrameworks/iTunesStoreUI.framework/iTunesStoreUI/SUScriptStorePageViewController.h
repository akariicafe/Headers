@class NSArray, NSString, SUScriptSegmentedControl, NSNumber;

@interface SUScriptStorePageViewController : SUScriptViewController {
    NSArray *_initialURLStrings;
}

@property (readonly) NSArray *URLStrings;
@property id alwaysDispatchesScrollEvents;
@property BOOL doubleTapEnabled;
@property BOOL flashesScrollIndicators;
@property id inputViewObeysDOMFocus;
@property long long loadingIndicatorStyle;
@property id loadsWhenHidden;
@property (retain) id loadingTextColor;
@property (retain) id loadingTextShadowColor;
@property (retain) id placeholderBackgroundStyle;
@property (readonly) id rootObject;
@property BOOL scrollingEnabled;
@property (retain) SUScriptSegmentedControl *segmentedControl;
@property BOOL shouldInvalidateForLowMemory;
@property BOOL shouldLoadProgressively;
@property id shouldShowFormAccessory;
@property BOOL showsBackgroundShadow;
@property id showsHorizontalScrollIndicator;
@property id showsVerticalScrollIndicator;
@property (retain) NSNumber *timeoutInterval;
@property (retain) id URLs;
@property (retain) NSString *userInfo;
@property (readonly) long long indicatorStyleWhite;
@property (readonly) long long indicatorStyleGray;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (BOOL)copyURLStrings:(id *)a0 forValue:(id)a1;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_className;
- (id)attributeKeys;
- (id)_storePageViewController;
- (id)scriptAttributeKeys;
- (void)_setValue:(id)a0 forScriptPropertyKey:(id)a1;
- (id)_copyURLsFromURLStrings:(id)a0;
- (BOOL)_isSegmentedControlValid:(id)a0;
- (id)_pathForWebArchiveWithIdentifier:(id)a0 inDirectory:(id)a1;
- (void)_setURLs:(id)a0;
- (void)applyURLStrings:(id)a0 toViewController:(id)a1;
- (id)initWithURLStrings:(id)a0;
- (id)loadWebArchiveWithIdentifier:(id)a0 fromDirectory:(id)a1;
- (id)newNativeViewController;
- (void)reloadWithCallback:(id)a0;
- (id)saveWebArchiveWithIdentifier:(id)a0 toDirectory:(id)a1;
- (void)setNativeViewController:(id)a0;
- (void)setScrollEdgeInsetsWithTop:(double)a0 left:(double)a1 bottom:(double)a2 right:(double)a3;

@end
