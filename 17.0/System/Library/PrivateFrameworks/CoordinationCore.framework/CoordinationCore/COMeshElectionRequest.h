@class NSString;

@interface COMeshElectionRequest : COMeshBaseBallotRequest <COOnDemandCreationMeshRequestProtocol>

@property (readonly, nonatomic) int listeningPort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)acceptableResponses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBallot:(id)a0 generation:(unsigned long long)a1 listeningPort:(int)a2;

@end
