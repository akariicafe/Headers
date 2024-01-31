@interface SUButtonAction : NSObject

@property (readonly, nonatomic, getter=isActivated) BOOL activated;

- (void)_buttonAction:(id)a0;
- (void)_setActivated:(BOOL)a0;

@end
