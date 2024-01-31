@class NSString;
@protocol ACTClientProtocol;

@interface ACTClientProxy : NSObject <TIClientProxy>

@property (readonly, weak, nonatomic) id<ACTClientProtocol> client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClient:(id)a0;
- (void)pushCandidateResultSet:(id)a0 requestToken:(id)a1;
- (void).cxx_destruct;
- (void)closeRequestToken:(id)a0;
- (void)pushCandidates:(id)a0 requestToken:(id)a1;

@end
