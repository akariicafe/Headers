@class NSMutableDictionary, NSMutableSet;

@interface WebElementDictionary : NSDictionary {
    void *_result;
    NSMutableDictionary *_cache;
    NSMutableSet *_nilValues;
    BOOL _cacheComplete;
}

+ (void)initialize;
+ (void)initializeLookupTable;

- (id)_title;
- (void)dealloc;
- (id)keyEnumerator;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)_isSelected;
- (id)_textContent;
- (id)_targetWebFrame;
- (id)_absoluteImageURL;
- (id)_absoluteMediaURL;
- (id)_domNode;
- (id)_absoluteLinkURL;
- (id)_altDisplayString;
- (void)_fillCache;
- (id)_isContentEditable;
- (id)_isInScrollBar;
- (id)_isLiveLink;
- (id)_spellingToolTip;
- (id)_titleDisplayString;
- (id)_webFrame;
- (id)initWithHitTestResult:(const void *)a0;

@end
