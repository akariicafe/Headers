@class NSUUID, NSOrderedSet, NSString, CORapportTransport, RPCompanionLinkDevice, COUnhandledRapportRequest, COConstituent;

@interface CODiscoveryRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, CODiscoveryRecordProtocol, CORapportTransportCompatibleProcotol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) COConstituent *constituent;
@property (retain, nonatomic) NSOrderedSet *destinations;
@property (readonly, nonatomic) NSString *rapportIdentifier;
@property (readonly, copy, nonatomic) NSString *IDSIdentifier;
@property (readonly, nonatomic) RPCompanionLinkDevice *companionLinkDevice;
@property (retain, nonatomic) CORapportTransport *sourceTransport;
@property (retain, nonatomic) COUnhandledRapportRequest *unhandledRequest;
@property (readonly, nonatomic) NSUUID *HomeKitIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ companionLinkProvider;

+ (id)_destinationForPeerAddress:(id)a0 listeningPort:(unsigned short)a1;
+ (id)discoveryRecordWithConstituent:(id)a0 rapportIdentifier:(id)a1 IDSIdentifier:(id)a2 peerAddress:(id)a3 port:(int)a4;
+ (id)discoveryRecordWithNode:(id)a0;
+ (id)discoveryRecordWithNodeController:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)shouldAdvertise;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)requiresInquiry;
- (id)_initWithConstituent:(id)a0 rapportIdentifier:(id)a1 IDSIdentifier:(id)a2 destinations:(id)a3;
- (BOOL)hasSameBackingDeviceAs:(id)a0;
- (id)initWithDiscoveryRecord:(id)a0;
- (BOOL)isEqualToDiscoveryRecord:(id)a0;
- (id)newTransportWithExecutionContext:(id)a0;
- (BOOL)producesElectionCapableTransport;

@end
