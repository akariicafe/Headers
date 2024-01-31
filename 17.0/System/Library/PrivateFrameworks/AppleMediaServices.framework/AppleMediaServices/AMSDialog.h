@class NSArray, NSImage, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AMSDialog : NSObject {
    NSObject<OS_dispatch_queue> *_systemDialogQueue;
}

@property (copy, nonatomic) NSArray *buttons;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSImage *icon;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long selectedButtonIndex;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSArray *textFields;
@property (copy, nonatomic) NSString *title;

+ (id)dialogWithTitle:(id)a0 message:(id)a1;
+ (id)dialogWithTitle:(id)a0 message:(id)a1 style:(long long)a2;

- (void)present;
- (void)addButton:(id)a0;
- (void).cxx_destruct;
- (void)addTextField:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 style:(long long)a2;
- (void)presentFromViewController:(id)a0;
- (void)presentSheetFromWindow:(id)a0;
- (void)presentSystemDialog;

@end
