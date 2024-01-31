@class ICNote, ICAccount, UIWindow;

@interface ICNoteLockManager : NSObject

@property (retain, nonatomic) ICNote *updatedNote;
@property (readonly, nonatomic) ICAccount *account;
@property (readonly, nonatomic) ICNote *note;
@property (weak, nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (void)addLockWithCompletionHandler:(id /* block */)a0;
- (id)initWithNote:(id)a0;
- (void)removeLockWithCompletionHandler:(id /* block */)a0;
- (void)toggleLockWithCompletionHandler:(id /* block */)a0;
- (void)unsafelyToggleLockWithCompletionHandler:(id /* block */)a0;

@end
