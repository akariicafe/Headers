@class AUUIAlert, NSString;

@interface AUUIAlertDelegateClass : NSObject <AUUIAlertDelegate>

@property (retain, nonatomic) AUUIAlert *uiAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)auUIAlertCancelAction:(id)a0;
- (BOOL)auUIAlertOKAction:(id)a0;

@end
