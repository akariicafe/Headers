@class CONode, NSString, NSUUID, NSMutableDictionary, COMeshLocalNode, COClusterMemberRoleSnapshot, NSObject, COConstituent, CODiscoveryRecord;
@protocol COCompanionLinkClientProtocol, OS_nw_activity, COMeshNodeDelegate;

@interface COMeshNode : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<COMeshNodeDelegate> delegate;
@property (retain, nonatomic) COClusterMemberRoleSnapshot *memberSnapshot;
@property (readonly, nonatomic) id<COCompanionLinkClientProtocol> client;
@property (retain, nonatomic) CODiscoveryRecord *discoveryRecord;
@property (weak, nonatomic) COMeshLocalNode *parent;
@property (nonatomic) BOOL linkActivated;
@property (nonatomic) BOOL nodeActivated;
@property (copy, nonatomic) NSString *meshName;
@property (copy, nonatomic) id /* block */ recorder;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) COConstituent *remote;
@property (nonatomic) unsigned long long requestCount;
@property (nonatomic) double averageRequestTime;
@property (readonly, copy, nonatomic) NSMutableDictionary *counters;
@property (nonatomic) unsigned long long discoveryType;
@property (nonatomic) unsigned long long connectionType;
@property (readonly, nonatomic) NSObject<OS_nw_activity> *activity;
@property (readonly, nonatomic) CONode *underlyingNode;
@property (readonly, nonatomic) NSString *IDSIdentifier;
@property (readonly, nonatomic) NSUUID *HomeKitIdentifier;
@property (readonly, nonatomic) COConstituent *source;

+ (void)_commandPayloadFromRapportRepresentation:(id)a0 result:(id /* block */)a1;

- (unsigned long long)hash;
- (void)invalidate;
- (void)_handleDisconnect;
- (void)activate;
- (id)description;
- (id)initWithNode:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_commandPayloadFromRapportRepresentation:(id)a0;
- (id)_eventIDForClass:(Class)a0;
- (void)_handleActivation:(id)a0;
- (void)_handleErrorFlagsUpdate;
- (void)_handleRPIsUsingOnDemandConnection;
- (void)_handleRPStateUpdate;
- (void)_handleResponseToRequest:(id)a0 rapportRepresentation:(id)a1 options:(id)a2 error:(id)a3 responseCallback:(id /* block */)a4 at:(unsigned long long)a5;
- (id)_serializedDataForCommand:(id)a0;
- (void)_setIDSIdentifier:(id)a0;
- (void)_validateDiscoveryRecord;
- (BOOL)_validateSource:(id)a0;
- (id)initWithCompanionLinkClient:(id)a0 source:(id)a1;
- (void)sendMeshCommand:(id)a0;
- (void)sendMeshRequest:(id)a0;
- (void)sendMeshRequest:(id)a0 responseCallback:(id /* block */)a1;

@end
