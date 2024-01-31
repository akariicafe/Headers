@class NSString, CORapportBrowser, NSUUID;
@protocol COCompanionLinkClientProtocol;

@interface CORapportCurrentDevice : NSObject <CODiscoveryRecordProtocol, CORapportTransportCompatibleProcotol>

@property (readonly, weak, nonatomic) CORapportBrowser *browser;
@property (readonly, nonatomic) id<COCompanionLinkClientProtocol> client;
@property (readonly, copy, nonatomic) NSString *IDSIdentifier;
@property (readonly, nonatomic) NSUUID *HomeKitIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ companionLinkProvider;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)requiresInquiry;
- (BOOL)hasSameBackingDeviceAs:(id)a0;
- (id)initWithClient:(id)a0 browser:(id)a1;
- (id)newTransportWithExecutionContext:(id)a0;
- (BOOL)producesElectionCapableTransport;

@end
