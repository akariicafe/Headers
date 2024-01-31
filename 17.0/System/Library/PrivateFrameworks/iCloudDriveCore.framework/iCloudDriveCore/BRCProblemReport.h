@class NSString, NSSet, NSMutableDictionary, NSNumber;

@interface BRCProblemReport : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_problems;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) NSString *effectiveProblemMessage;
@property (readonly, nonatomic) NSSet *effectedRecordNames;
@property (retain, nonatomic) NSNumber *pendingRequestID;
@property (nonatomic) BOOL needsSyncUp;
@property (readonly, nonatomic) BOOL shouldResetAfterFixingState;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addProblem:(id)a0;
- (int)_effectiveProblemType;
- (int)_priorityForProblemType:(int)a0;
- (int)_zoneStateForProblemType:(int)a0;
- (void)addProblemWithType:(int)a0 recordName:(id)a1;
- (id)initWithProblemReport:(id)a0;

@end
