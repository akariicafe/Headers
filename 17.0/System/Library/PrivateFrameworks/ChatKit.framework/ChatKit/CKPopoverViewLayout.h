@class CKPopoverViewLayoutConfiguration;

@interface CKPopoverViewLayout : NSObject

@property (nonatomic, getter=isMutating, setter=setMutating:) BOOL mutating;
@property (retain, nonatomic) CKPopoverViewLayoutConfiguration *configuration;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } anchorFrameInContainer;
@property (nonatomic) unsigned long long state;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic) struct CGPoint { double x; double y; } anchorCenter;
@property (nonatomic) struct CGSize { double width; double height; } anchorSize;

- (id)description;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)updateProperties:(id /* block */)a0;
- (id)newLayoutMetricsWithCoordinateSpace:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })popoverFrameInContainer;

@end
