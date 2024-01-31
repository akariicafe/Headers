@interface _UIEditMenuPresentationLayout : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) struct CGPoint { double x; double y; } menuPosition;
@property (nonatomic) long long arrowDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } menuSourceRect;

- (id)description;

@end
