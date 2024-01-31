@class UIButton, WFDialogButton;
@protocol WFCompactAppearanceProvider;

@interface WFCompactDialogAction : NSObject

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) UIButton *uiButton;
@property (readonly, nonatomic) WFDialogButton *dialogButton;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) id<WFCompactAppearanceProvider> appearanceProvider;

+ (id)actionForButton:(id)a0 handler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)invokeHandler;

@end
