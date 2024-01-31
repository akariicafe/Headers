@class UIAlertController, NSString;

@interface EKUIRecurrenceAlertController : NSObject <UIActionSheetDelegate>

@property (copy) id /* block */ completionHandler;
@property (retain) UIAlertController *alertController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cancelLocalizedString;
+ (id)_detachAllLocalizedString;
+ (id)_detachFutureLocalizedString;
+ (int)_determineChoicesForEvent:(id)a0 options:(unsigned long long)a1;
+ (id)deleteAlertWithOptions:(unsigned long long)a0 forEvent:(id)a1 stringForDeleteButton:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (id)newAlertControllerWithCompletionHandler:(id /* block */)a0;
+ (id)presentAttachmentAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 barButtonItem:(id)a2 forEvent:(id)a3 withCompletionHandler:(id /* block */)a4;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 barButtonItem:(id)a2 forEvent:(id)a3 stringForDeleteButton:(id)a4 withCompletionHandler:(id /* block */)a5;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 forEvents:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 forEvent:(id)a4 stringForDeleteButton:(id)a5 withCompletionHandler:(id /* block */)a6;
+ (id)presentDetachAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 barButtonItem:(id)a2 forEvent:(id)a3 withCompletionHandler:(id /* block */)a4;
+ (id)presentDetachAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 forEvent:(id)a4 withCompletionHandler:(id /* block */)a5;
+ (id)presentUnsubscribeAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 withCompletionHandler:(id /* block */)a4;
+ (id)unsubscribeAlertWithOptions:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;

- (void)_cleanup;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelAnimated:(BOOL)a0;
- (void)_completeWithSelection:(unsigned long long)a0;
- (void)_configureAlertControllerWithSourceView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 barButtonItem:(id)a2;
- (void)_presentAttachmentsAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 barButtonItem:(id)a2 forEvent:(id)a3;
- (void)_presentDeleteAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 barButtonItem:(id)a4 forEvent:(id)a5 stringForDeleteButton:(id)a6;
- (void)_presentDetachAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 barButtonItem:(id)a4 forEvent:(id)a5;
- (BOOL)_setupDeleteAlertForEvents:(id)a0;
- (BOOL)_useSheetForViewController:(id)a0 options:(unsigned long long)a1;
- (void)setupDeleteAlertWithOptions:(unsigned long long)a0 viewController:(id)a1 forEvent:(id)a2 stringForDeleteButton:(id)a3;
- (void)setupUnsubscribeAlertWithOptions:(unsigned long long)a0 viewController:(id)a1;

@end
