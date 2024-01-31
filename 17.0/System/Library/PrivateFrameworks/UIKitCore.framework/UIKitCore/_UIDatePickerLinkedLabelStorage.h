@class UILabel, NSCache, NSHashTable;

@interface _UIDatePickerLinkedLabelStorage : NSObject {
    UILabel *_sizingLabel;
    NSHashTable *_attachedLabels;
    unsigned long long _currentPriority;
    NSCache *_sizeCache;
}

- (id)init;
- (void).cxx_destruct;
- (void)_attachLabel:(id)a0;
- (BOOL)_cachedSizeForKey:(id)a0 size:(struct CGSize { double x0; double x1; } *)a1;
- (unsigned long long)_currentPriority;
- (void)_detachLabel:(id)a0;
- (void)_notifyAllLabelsExcept:(id)a0;
- (void)_resetPriority;
- (void)_setCachedSize:(struct CGSize { double x0; double x1; })a0 forKey:(id)a1;
- (void)_setPriority:(long long)a0 label:(id)a1;
- (struct CGSize { double x0; double x1; })_sizeForText:(id)a0 font:(id)a1 height:(double)a2 overrideAttributes:(id)a3;

@end
