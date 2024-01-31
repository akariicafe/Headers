@class COIDSServiceDirector, NSString, COOnDemandIDSNodeCreationRequest, NSUUID;

@interface COIDSDiscoveryRecord : NSObject <CODiscoveryRecordProtocol, COIDSTransportCompatibleProcotol>

@property (copy, nonatomic) COIDSServiceDirector *serviceDirector;
@property (readonly, copy, nonatomic) NSString *deviceTokenURI;
@property (retain, nonatomic) COOnDemandIDSNodeCreationRequest *onDemandRequest;
@property (readonly, copy, nonatomic) NSString *IDSIdentifier;
@property (readonly, nonatomic) NSUUID *HomeKitIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)requiresInquiry;
- (BOOL)hasSameBackingDeviceAs:(id)a0;
- (id)initWithIdsIdentifier:(id)a0 deviceTokenURI:(id)a1;
- (id)newTransportWithExecutionContext:(id)a0;
- (BOOL)producesElectionCapableTransport;

@end
