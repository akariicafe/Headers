@class NSString, BMProcess, NSMutableDictionary;

@interface BMAccessControlPolicy : NSObject {
    BMAccessControlPolicy *_onBehalfOf;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_authorizedResources;
}

@property (readonly) BOOL allowsConnectionToWriteService;
@property (readonly, nonatomic) BMProcess *process;
@property (readonly, nonatomic) NSString *useCase;
@property (readonly, nonatomic) NSString *descriptionOfProcessAndUseCase;
@property (readonly) BOOL allowsAccessToSync;
@property (readonly) BOOL allowsAccessToFlexibleStorage;
@property (readonly) BOOL allowsConnectionToComputePublisherService;
@property (readonly) BOOL allowsConnectionToComputeSourceService;
@property (readonly) BOOL allowsProxyingBiomeEndpoint;
@property (readonly) BOOL allowsAccessToContextSync;

+ (id)policyForProcess:(id)a0 useCase:(id)a1;
+ (id)contextSyncMapping;
+ (id)policyForProcess:(id)a0 onBehalfOfProcessWithAccessControlPolicy:(id)a1;
+ (BOOL)process:(id)a0 canActOnBehalfOfProcess:(id)a1;

- (id)init;
- (BOOL)allowsAccessToContextSyncStreams:(id)a0;
- (BOOL)allowsConnectionToAccessServiceWithDomain:(unsigned long long)a0;
- (void)_warnAboutInternalEntitlement:(id)a0 streamIdentifier:(id)a1;
- (BOOL)allowsAccessToWriteServiceForStream:(id)a0 ofUser:(unsigned int)a1;
- (id)authorizedResources;
- (BOOL)allowsAccessToResource:(id)a0 withMode:(unsigned long long)a1;
- (BOOL)allowsComputePublisherAccessToStreams:(id)a0;
- (unsigned long long)allowedModeForStream:(id)a0;
- (BOOL)allowsComputeSourceAccessToStreams:(id)a0;
- (BOOL)allowsAccessToStream:(id)a0 withMode:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithProcess:(id)a0 useCase:(id)a1;
- (BOOL)allowsAccessToClientCompute:(id)a0;
- (BOOL)allowsAccessToDatabase:(id)a0 withMode:(unsigned long long)a1;
- (id)explicitlyAuthorizedResourcesOfType:(unsigned long long)a0 withAccessMode:(unsigned long long)a1;
- (BOOL)allowsAccessToView:(id)a0 withMode:(unsigned long long)a1;

@end
