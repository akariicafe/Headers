@class NSArray, UIView;

@interface HUControlHostView : UIView

@property (retain, nonatomic) NSArray *controlConstraints;
@property (nonatomic) BOOL requiresWellDefinedSize;
@property (retain, nonatomic) UIView *controlView;

+ (BOOL)requiresConstraintBasedLayout;

- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithControlView:(id)a0;

@end
