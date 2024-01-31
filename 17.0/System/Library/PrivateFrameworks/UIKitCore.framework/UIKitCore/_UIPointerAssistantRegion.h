@class _UIAssistantEntry, UIView;

@interface _UIPointerAssistantRegion : UIPointerRegion {
    BOOL _selected;
    UIView *_targetView;
    _UIAssistantEntry *_assistant;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
