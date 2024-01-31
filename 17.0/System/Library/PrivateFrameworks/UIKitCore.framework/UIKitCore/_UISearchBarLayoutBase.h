@interface _UISearchBarLayoutBase : NSObject <NSCopying> {
    BOOL _isLayoutValid;
}

@property (nonatomic) long long barMetrics;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic, getter=isLayoutRTL) BOOL layoutRTL;
@property (nonatomic, getter=isHostedByNavigationBar) BOOL hostedByNavigationBar;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (readonly, nonatomic, getter=isLayoutValid) BOOL layoutValid;

- (void)updateLayoutIfNeeded;
- (void)updateLayout;
- (id)description;
- (void)applyLayout;
- (void)invalidateLayout;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
