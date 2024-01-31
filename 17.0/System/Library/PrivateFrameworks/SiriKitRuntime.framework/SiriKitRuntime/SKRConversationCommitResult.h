@interface SKRConversationCommitResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ activeTasks;
    void /* unknown type, empty encoding */ completedTasks;
    void /* unknown type, empty encoding */ flowUnhandledReason;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ nextPluginActionData;
    void /* unknown type, empty encoding */ reparseExecutionRequestID;
    void /* unknown type, empty encoding */ reparseUserID;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
