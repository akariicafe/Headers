@interface _UIMotionEffectsVisitor : _UIViewVisitor {
    BOOL _subviewAddedToHierarchy;
    unsigned long long _countOfMotionEffectsInSubview;
}

- (BOOL)_prepareToVisitView:(id)a0 changedSubview:(id)a1 previousWindow:(id)a2 previousSuperview:(id)a3;
- (BOOL)_visitView:(id)a0;

@end
