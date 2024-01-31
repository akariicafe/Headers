@class NSArray, UIView;

@interface PREditorLookViews : NSObject <PREditingLookViewProviding>

@property (readonly, nonatomic) NSArray *contentViews;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *foregroundView;
@property (readonly, nonatomic) UIView *floatingView;

- (id)init;
- (void).cxx_destruct;
- (void)enumerateViewsUsingBlock:(id /* block */)a0;

@end
