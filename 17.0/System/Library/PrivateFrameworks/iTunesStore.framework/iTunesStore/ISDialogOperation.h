@class NSArray, ISDialogButton, ISDialog;
@protocol ISDialogOperationDelegate;

@interface ISDialogOperation : ISOperation {
    NSArray *_textFieldValues;
}

@property (retain) id userNotification;
@property id<ISDialogOperationDelegate> delegate;
@property (retain) ISDialog *dialog;
@property BOOL performDefaultActions;
@property (retain) ISDialogButton *selectedButton;
@property (readonly) NSArray *textFieldValues;

+ (id)operationWithDialog:(id)a0;
+ (id)operationWithError:(id)a0;

- (void)_run;
- (id)init;
- (void)run;
- (void)dealloc;
- (void)cancel;
- (void)_handleResponseForNotification:(struct __CFUserNotification { } *)a0 responseFlags:(unsigned long long)a1;
- (void)_showUserNotification:(id)a0;
- (void)_waitForUserNotificationResponse:(struct __CFUserNotification { } *)a0;
- (void)handleButtonSelected:(long long)a0 withResponseDictionary:(id)a1;

@end
