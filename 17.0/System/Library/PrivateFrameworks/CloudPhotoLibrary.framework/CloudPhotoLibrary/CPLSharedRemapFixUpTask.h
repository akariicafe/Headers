@class CPLScopedIdentifier;

@interface CPLSharedRemapFixUpTask : NSObject

@property (readonly, nonatomic) CPLScopedIdentifier *sharedCloudScopedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *realCloudScopedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *privateCloudScopedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *proposedPrivateScopedIdentifier;
@property (readonly, nonatomic) Class recordClass;

- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSharedCloudScopedIdentifier:(id)a0 realCloudScopedIdentifier:(id)a1 privateCloudScopedIdentifier:(id)a2 proposedPrivateScopedIdentifier:(id)a3 recordClass:(Class)a4;

@end
