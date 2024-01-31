@class NSString;

@interface _COMeshControllerPing : COMeshRequest <COOnDemandCreationMeshRequestProtocol>

@property (readonly, nonatomic) double responseTimeout;
@property (readonly, nonatomic) int listeningPort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)acceptableResponses;

@end
