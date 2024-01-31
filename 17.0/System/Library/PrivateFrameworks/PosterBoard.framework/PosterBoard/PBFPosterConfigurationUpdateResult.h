@class NSArray, PRPosterConfiguration, PRIncomingPosterConfiguration;
@protocol BSInvalidatable;

@interface PBFPosterConfigurationUpdateResult : NSObject {
    id<BSInvalidatable> _pathValidityExtension;
    id<BSInvalidatable> _assocPathValidityExtension;
}

@property (readonly, nonatomic) PRIncomingPosterConfiguration *incomingPosterConfiguration;
@property (readonly, nonatomic) PRIncomingPosterConfiguration *incomingAssocPosterConfiguration;
@property (readonly, nonatomic) NSArray *postersToDelete;
@property (readonly, nonatomic) PRPosterConfiguration *configuration;
@property (readonly, nonatomic) NSArray *updates;
@property (readonly, nonatomic) NSArray *roleCoordinatorChanges;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 updates:(id)a1 changes:(id)a2;
- (id)initWithIncomingPosterConfiguration:(id)a0 incomingAssocPosterConfiguration:(id)a1 postersToDelete:(id)a2;

@end
