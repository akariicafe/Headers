@class NSString, NSXPCConnection, AnalyticsWorkspace, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, SFServiceInterface;

@interface NWNetworkOfInterestManager : NSObject <SFClientInterfaceProxy> {
    AnalyticsWorkspace *workspace;
    NSMutableSet *registryNOI;
    int notifyToken;
    BOOL closing;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id<SFServiceInterface> service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callerQueue;
@property (weak, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isClosing;
- (void)trackAllBuiltinNOIsForInterfaceType:(long long)a0 options:(id)a1;
- (id)init;
- (void)_unloadState;
- (void)dealloc;
- (BOOL)_validateKeyPath:(id)a0;
- (void)trainingProgressForNOI:(id)a0 reply:(id /* block */)a1;
- (void)updatePredictionsForNOI:(id)a0 reply:(id /* block */)a1;
- (void)dayOfWeekPredictionGroupingForNOI:(id)a0 reply:(id /* block */)a1;
- (void)auditableLinkQualityForNOI:(id)a0 reply:(id /* block */)a1;
- (void)inquireNOIFor:(id)a0 orPredicate:(id)a1 requestedKeys:(id)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)destroy;
- (void)instantQualityForNOI:(id)a0 reply:(id /* block */)a1;
- (void)canUseOnAlternateNOI:(id)a0 apps:(id)a1 reply:(id /* block */)a2;
- (void)errorPredictionsForNOI:(id)a0 reply:(id /* block */)a1;
- (void)proxyUpdateNOI:(id)a0 keyPath:(id)a1 change:(id)a2;
- (void)proxyHaveNOIs:(id)a0 tornDown:(BOOL)a1;
- (void)setQueue:(id)a0;
- (void)trafficInvitesHourlyDistributionForNOI:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)trackNOIAnyForInterfaceSubtype:(long long)a0 options:(id)a1;
- (BOOL)_connect;
- (void)trackNOIAnyForInterfaceType:(long long)a0 options:(id)a1;
- (void)estimatedDataTransferTimeOnNOI:(id)a0 withPayloadInfo:(id)a1 reply:(id /* block */)a2;
- (void)_commonTrackRequestFor:(unsigned char)a0 isAny:(BOOL)a1 isBuiltin:(BOOL)a2 options:(id)a3 isCustom:(id)a4;
- (void)linkThroughputOnNOI:(id)a0 reply:(id /* block */)a1;
- (void)interfaceTimelineForNOI:(id)a0 reply:(id /* block */)a1;
- (void)foregroundNetworkActivityUnderwayOn:(id)a0 reply:(id /* block */)a1;
- (void)canUseOnAlternateNOI:(id)a0 appStates:(id)a1 reply:(id /* block */)a2;
- (void)trackCustomNOI:(id)a0 options:(id)a1;
- (void)networkAttachmentInfoForScopedNOI:(id)a0 reply:(id /* block */)a1;
- (void)stopTrackingNOIs:(id)a0;
- (void)_commonFinalizeRequestFor:(id)a0 orPredicate:(id)a1 options:(id)a2 isStaged:(BOOL)a3;

@end
