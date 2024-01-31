@class UIAlertAction, NSString;

@interface TabLimitCleanupGroup : NSObject

@property (readonly, nonatomic) UIAlertAction *action;
@property (readonly, copy, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)initWithAlertMesssage:(id)a0 actionTitle:(id)a1 tabs:(id)a2 browserWindowController:(id)a3 resultHandler:(id /* block */)a4;

@end
