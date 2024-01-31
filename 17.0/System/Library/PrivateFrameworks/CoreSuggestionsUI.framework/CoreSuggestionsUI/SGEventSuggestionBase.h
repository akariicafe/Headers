@class NSString, EKEvent, UIImage, SGRealtimeEvent;
@protocol SGSuggestionDelegate;

@interface SGEventSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    SGRealtimeEvent *_realtimeEvent;
    EKEvent *_eventKitEvent;
    UIImage *_calendarImage;
}

@property (weak, nonatomic) id<SGSuggestionDelegate> suggestionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_eventStore;
+ (id)calendarImage;
+ (void)confirm:(BOOL)a0 event:(id)a1 completion:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)suggestionTitle;
- (id)suggestionImage;
- (long long)suggestionActionButtonType;
- (id)suggestionCategory;
- (long long)suggestionCategoryActionButtonType;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)a0;
- (id)suggestionCategorySubtitleForItems:(id)a0;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)a0;
- (id /* block */)suggestionComparator;
- (id)suggestionDismissAction;
- (id)suggestionPrimaryAction;
- (id)suggestionSubtitle;
- (id)primaryActionTitle;
- (id)eventKitEvent;
- (void)eventKitStoreChangedNotification:(id)a0;
- (id)initWithRealtimeEvent:(id)a0;
- (void)preloadPrimaryActionViewController;
- (id)realtimeSuggestion;
- (id)suggestionsEvent;

@end
