@class NSString, NSMutableArray, UIViewController;
@protocol UIPopoverPresentationControllerSourceItem;

@interface PXAlertConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *actions;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<UIPopoverPresentationControllerSourceItem> sourceItem;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) UIViewController *headerContentViewController;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)initWithError:(id)a0;
- (id)init;
- (void)addActions:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addActionWithTitle:(id)a0 style:(long long)a1 action:(id /* block */)a2;
- (void)configureForError:(id)a0;
- (void)configureForPlaceholder:(id)a0;
- (void)featureNotEnabledWithDocumentationURLString:(id)a0;
- (void)notImplementedWithTrackingRadar:(long long)a0;

@end
