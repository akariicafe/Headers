@protocol BKUIAlertControllerListener;

@interface BKUIAlertController : UIAlertController

@property (weak, nonatomic) id<BKUIAlertControllerListener> alertListener;

- (void)addAction:(id)a0;
- (void).cxx_destruct;
- (void)bkui_addPreferredAction:(id)a0;

@end
