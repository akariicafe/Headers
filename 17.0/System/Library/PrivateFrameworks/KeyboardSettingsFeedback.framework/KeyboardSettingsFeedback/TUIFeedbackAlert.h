@interface TUIFeedbackAlert : NSObject

+ (void)messageWithTitle:(id)a0 message:(id)a1 actionLabel:(id)a2 parentController:(id)a3 completion:(id /* block */)a4;
+ (void)promptWithTitle:(id)a0 message:(id)a1 acceptActionLabel:(id)a2 declineActionLabel:(id)a3 parentController:(id)a4 completion:(id /* block */)a5;

@end
