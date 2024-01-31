@interface UICellHighlightingSupport : NSObject {
    struct __CFDictionary { } *_unhighlightedStates;
    id _cell;
}

- (void)dealloc;
- (void)applyState:(unsigned long long)a0 toView:(id)a1;
- (void).cxx_destruct;
- (id)initWithCell:(id)a0;
- (void)cacheState:(unsigned long long)a0 forView:(id)a1;
- (void)highlightView:(id)a0;

@end
