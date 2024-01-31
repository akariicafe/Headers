@class NSUUID, USOSerializedGraph, NSString;

@interface SIRINLUSystemReportedFailure : NSObject <SIRINLUSystemDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *taskId;
@property (retain, nonatomic) USOSerializedGraph *reason;
@property (retain, nonatomic) USOSerializedGraph *task;
@property (retain, nonatomic) NSString *renderedText;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTaskId:(id)a0 reason:(id)a1 task:(id)a2;

@end
