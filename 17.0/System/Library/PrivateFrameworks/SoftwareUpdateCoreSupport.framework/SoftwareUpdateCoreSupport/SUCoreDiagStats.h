@interface SUCoreDiagStats : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long beginCount;
@property (nonatomic) long long endSuccessCount;
@property (nonatomic) long long endFailCount;
@property (nonatomic) long long endFailIndicationsCount;
@property (nonatomic) long long endFailAllIndications;
@property (nonatomic) long long errorCount;
@property (nonatomic) long long errorIndicationsCount;
@property (nonatomic) long long errorAllIndications;
@property (nonatomic) long long anomalyCount;
@property (nonatomic) long long anomalyIndicationsCount;
@property (nonatomic) long long anomalyAllIndications;
@property (nonatomic) long long failureCount;
@property (nonatomic) long long failureIndicationsCount;
@property (nonatomic) long long failureAllIndications;
@property (nonatomic) long long faultCount;
@property (nonatomic) long long faultIndicationsCount;
@property (nonatomic) long long faultAllIndications;
@property (nonatomic) long long stateEventCount;

- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)initByCombining:(id)a0 withBeginCount:(long long)a1 withEndSuccessCount:(long long)a2 withEndFailCount:(long long)a3 withEndFailIndicationsCount:(long long)a4 withEndFailAllIndications:(long long)a5 withErrorCount:(long long)a6 withErrorIndicationsCount:(long long)a7 withErrorAllIndications:(long long)a8 withAnomalyCount:(long long)a9 withAnomalyIndicationsCount:(long long)a10 withAnomalyAllIndications:(long long)a11 withFailureCount:(long long)a12 withFailureIndicationsCount:(long long)a13 withFailureAllIndications:(long long)a14 withFaultCount:(long long)a15 withFaultIndicationsCount:(long long)a16 withFaultAllIndications:(long long)a17 withStateEventCount:(long long)a18;
- (id)initWithBeginCount:(long long)a0 withEndSuccessCount:(long long)a1 withEndFailCount:(long long)a2 withEndFailIndicationsCount:(long long)a3 withEndFailAllIndications:(long long)a4 withErrorCount:(long long)a5 withErrorIndicationsCount:(long long)a6 withErrorAllIndications:(long long)a7 withAnomalyCount:(long long)a8 withAnomalyIndicationsCount:(long long)a9 withAnomalyAllIndications:(long long)a10 withFailureCount:(long long)a11 withFailureIndicationsCount:(long long)a12 withFailureAllIndications:(long long)a13 withFaultCount:(long long)a14 withFaultIndicationsCount:(long long)a15 withFaultAllIndications:(long long)a16 withStateEventCount:(long long)a17;
- (id)copy;
- (void)combineWithStats:(id)a0;
- (id)description;
- (id)summaryOfProblems;
- (BOOL)encounteredProblems;
- (void)combineStartingFrom:(id)a0 endingWith:(id)a1;
- (id)initByCombining:(id)a0 withAdditonal:(id)a1;
- (long long)allIndications;
- (id)initWithCoder:(id)a0;
- (id)initIgnoringSuccessRelated;

@end
