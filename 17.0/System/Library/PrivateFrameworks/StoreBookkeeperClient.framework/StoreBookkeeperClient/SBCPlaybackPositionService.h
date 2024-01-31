@class SBCPlaybackPositionDomain, NSString;

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol>

@property (readonly, nonatomic) BOOL usingPlaybackPositions;
@property (readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceForSyncDomain:(id)a0;
+ (id)serviceForValueDomain:(id)a0;
+ (Class)XPCServiceInterfaceClass;
+ (id)_serviceForPlaybackPositionDomain:(id)a0;

- (void).cxx_destruct;
- (oneway void)beginAccessingPlaybackPositionEntities;
- (oneway void)endAccessingPlaybackPositionEntities;
- (oneway void)persistPlaybackPositionEntity:(id)a0 isCheckpoint:(BOOL)a1 completionBlock:(id /* block */)a2;
- (oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(id)a0 completionBlock:(id /* block */)a1;
- (oneway void)deletePlaybackPositionEntity:(id)a0;
- (oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)a0;
- (oneway void)pullPlaybackPositionEntity:(id)a0 completionBlock:(id /* block */)a1;
- (oneway void)pushPlaybackPositionEntity:(id)a0 completionBlock:(id /* block */)a1;
- (oneway void)synchronizeImmediatelyWithCompletionHandler:(id /* block */)a0;
- (id)initWithPlaybackPositionDomain:(id)a0;
- (void)validateConnectionConfiguration;
- (oneway void)deletePlaybackPositionEntities;
- (void)didConnectToService;

@end
