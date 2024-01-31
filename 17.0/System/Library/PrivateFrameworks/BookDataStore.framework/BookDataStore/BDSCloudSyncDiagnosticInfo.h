@class NSString, BDSCloudSyncDiagnosticSyncEngineInfo, NSArray, NSDictionary, BDSCloudSyncDiagnosticDatabaseInfo;

@interface BDSCloudSyncDiagnosticInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enabledSync;
@property (nonatomic) long long accountStatus;
@property (copy, nonatomic) NSString *container;
@property (nonatomic) BOOL gettingAccountInfo;
@property (retain, nonatomic) BDSCloudSyncDiagnosticDatabaseInfo *privateDatabaseInfo;
@property (retain, nonatomic) BDSCloudSyncDiagnosticSyncEngineInfo *privateDatabaseSyncEngineInfo;
@property (retain, nonatomic) NSArray *entityInfos;
@property (readonly, nonatomic) NSDictionary *stateForLog;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEnabledSync:(BOOL)a0 accountStatus:(long long)a1 container:(id)a2 gettingAccountInfo:(BOOL)a3 privateDatabaseInfo:(id)a4 privateDatabaseSyncEngineInfo:(id)a5 entityInfos:(id)a6;

@end
