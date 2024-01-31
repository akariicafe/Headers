@class NSString, WBSOnDeviceSearchSuggestionsModel, NSObject;
@protocol WBSOnDeviceSearchSuggestionsProviderDelegate, OS_dispatch_queue;

@interface WBSOnDeviceSearchSuggestionsProvider : NSObject {
    WBSOnDeviceSearchSuggestionsModel *_searchModel;
    NSObject<OS_dispatch_queue> *_completionQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _prefixLock;
    NSString *_currentPrefix;
}

@property (nonatomic) unsigned long long maximumNumberOfSuggestions;
@property (weak, nonatomic) id<WBSOnDeviceSearchSuggestionsProviderDelegate> delegate;

- (void)setQueryString:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_doSearch:(id)a0 atRootNode:(struct _WBSSearchSuggestionCandidate { unsigned int x0; unsigned int x1; BOOL x2; id x3; } *)a1;
- (BOOL)_findRootNodeForPrefix:(id)a0 rootNode:(struct _WBSSearchSuggestionCandidate { unsigned int x0; unsigned int x1; BOOL x2; id x3; } *)a1;
- (id)_loadModel;
- (void)reloadModel;

@end
