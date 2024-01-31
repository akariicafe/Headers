@class UITextSearchOptions, NSString, UIFindInteraction, UIResponder, UIView;

@interface UIFindSession : NSObject {
    UIResponder *_divergentResponderForSession;
}

@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *replacementText;
@property (retain, nonatomic) UITextSearchOptions *configuredSearchOptions;
@property (weak, nonatomic) UIFindInteraction *parentInteraction;
@property (weak, nonatomic) UIResponder *searchableResponder;
@property (readonly, nonatomic) UIView *searchableResponderAsView;
@property (readonly, nonatomic) UIResponder *divergentResponder;
@property (readonly, nonatomic) long long resultCount;
@property (readonly, nonatomic) long long highlightedResultIndex;
@property (nonatomic) long long searchResultDisplayStyle;
@property (readonly, nonatomic) BOOL supportsReplacement;
@property (readonly, nonatomic) BOOL allowsReplacementForCurrentlyHighlightedResult;
@property (readonly, nonatomic) BOOL allowsReplacement;

- (void).cxx_destruct;
- (void)highlightNextResultInDirection:(long long)a0;
- (void)performSearchWithQuery:(id)a0 options:(id)a1;
- (void)replaceAllInstancesOfSearchQuery:(id)a0 withReplacementString:(id)a1 options:(id)a2;
- (void)invalidateFoundResults;
- (void)performSingleReplacementWithSearchQuery:(id)a0 replacementString:(id)a1 options:(id)a2;

@end
