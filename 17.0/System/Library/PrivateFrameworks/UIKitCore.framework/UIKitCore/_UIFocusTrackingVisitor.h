@interface _UIFocusTrackingVisitor : _UIViewVisitor {
    BOOL _subviewAddedToHierarchy;
    unsigned long long _countOfFocusedAncestorTrackingViewsInSubtree;
}

- (BOOL)_prepareToVisitView:(id)a0 changedSubview:(id)a1 previousWindow:(id)a2 previousSuperview:(id)a3;
- (BOOL)_visitView:(id)a0;

@end
