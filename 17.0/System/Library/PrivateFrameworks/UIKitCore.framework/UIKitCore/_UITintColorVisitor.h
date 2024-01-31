@class UIView;

@interface _UITintColorVisitor : _UIViewVisitor {
    unsigned long long _reasons;
    UIView *_originalVisitedView;
    UIView *_changedSubview;
}

- (id)initWithTraversalDirection:(unsigned long long)a0;
- (id)initWithNotificationReasons:(unsigned long long)a0;
- (BOOL)_prepareToVisitView:(id)a0 changedSubview:(id)a1 previousWindow:(id)a2 previousSuperview:(id)a3;
- (BOOL)_visitView:(id)a0;

@end
