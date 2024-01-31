@class NSString, UIImage;

@interface SFUnifiedTabBarItemAvailabilityAction : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long buttonType;
@property (readonly, copy, nonatomic) id /* block */ action;

- (void)performAction;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 image:(id)a1 buttonType:(long long)a2 action:(id /* block */)a3;

@end
