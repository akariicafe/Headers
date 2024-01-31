@class ISOperation, NSString;

@interface SUBackgroundTaskOperation : ISOperation {
    ISOperation *_operation;
    NSString *_permissionIdentifier;
    unsigned long long _taskIdentifier;
}

@property (readonly) ISOperation *operation;
@property (readonly) NSString *permissionIdentifier;

- (void)run;
- (void)dealloc;
- (void)_cancelBackgroundAssertion;
- (void)_removeBackgroundAssertion;
- (void)_takeBackgroundAssertion;
- (id)initWithOperation:(id)a0 identifier:(id)a1;

@end
