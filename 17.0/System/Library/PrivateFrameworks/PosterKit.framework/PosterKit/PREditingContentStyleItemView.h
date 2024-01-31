@class PREditingPosterContentStyleCoordinator, UIView;

@interface PREditingContentStyleItemView : PRSelectableEditingItemView

@property (retain, nonatomic) UIView *itemView;
@property (retain, nonatomic) PREditingPosterContentStyleCoordinator *contentStyleCoordinator;

- (id)localizedName;
- (void).cxx_destruct;
- (id)initWithContentStyleCoordinator:(id)a0;

@end
