@class NSString;

@interface SKRExecutionContextUpdate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ provideContextCommand;
    void /* unknown type, empty encoding */ nativeFlowContextCommand;
    void /* unknown type, empty encoding */ nluSystemDialogActs;
    void /* unknown type, empty encoding */ nluActiveTasks;
    void /* unknown type, empty encoding */ nluCompletedTasks;
    void /* unknown type, empty encoding */ undoDirectInvocation;
    void /* unknown type, empty encoding */ rrEntities;
    void /* unknown type, empty encoding */ pommesContext;
    void /* unknown type, empty encoding */ contextUpdateScope;
    void /* unknown type, empty encoding */ clearActiveTasks;
    void /* unknown type, empty encoding */ clearCompletedTasks;
    void /* unknown type, empty encoding */ restoreSessionForRequestId;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
