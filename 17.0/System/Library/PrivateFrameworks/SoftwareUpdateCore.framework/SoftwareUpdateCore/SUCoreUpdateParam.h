@class SUCoreRollback, NSError, SUCoreProgress, SUCorePolicy;

@interface SUCoreUpdateParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long targetPhase;
@property (retain, nonatomic) SUCorePolicy *policy;
@property (retain, nonatomic) SUCoreProgress *downloadProgress;
@property (retain, nonatomic) SUCoreProgress *prepareProgress;
@property (retain, nonatomic) SUCoreProgress *applyProgress;
@property (retain, nonatomic) SUCoreRollback *rollback;
@property (nonatomic) long long resultCode;
@property (retain, nonatomic) NSError *error;

+ (id)targetPhaseName:(long long)a0;
+ (id)targetRollbackPhaseName:(long long)a0;

- (id)initWithError:(id)a0;
- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initTargetPhase:(long long)a0 policy:(id)a1 downloadProgress:(id)a2 prepareProgress:(id)a3 applyProgress:(id)a4 rollback:(id)a5 resultCode:(long long)a6 error:(id)a7;
- (id)initTargetPhase:(long long)a0 withPolicy:(id)a1;
- (id)initWithApplyProgress:(id)a0;
- (id)initWithDownloadProgress:(id)a0;
- (id)initWithPrepareProgress:(id)a0;
- (id)initWithRollback:(id)a0 withError:(id)a1;
- (id)initWithRollback:(id)a0 withPolicy:(id)a1;

@end
