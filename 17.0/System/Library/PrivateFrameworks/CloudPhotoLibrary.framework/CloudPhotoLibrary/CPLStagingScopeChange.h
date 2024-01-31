@class NSData, CPLScopeChange;

@interface CPLStagingScopeChange : CPLScopeChange

@property (copy, nonatomic) CPLScopeChange *stagedScopeChange;
@property (copy, nonatomic) NSData *stagedTransportScope;
@property (nonatomic) long long stagedScopeFlags;

- (void).cxx_destruct;

@end
