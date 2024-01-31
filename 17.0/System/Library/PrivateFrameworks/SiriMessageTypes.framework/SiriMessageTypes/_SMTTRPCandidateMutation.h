@class NSString, SMTTRPCandidate, NSArray;

@interface _SMTTRPCandidateMutation : NSObject <SMTTRPCandidateMutating> {
    SMTTRPCandidate *_base;
    NSString *_trpCandidateId;
    NSString *_requestId;
    NSArray *_tcuList;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasTrpCandidateId : 1; unsigned char hasRequestId : 1; unsigned char hasTcuList : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setRequestId:(id)a0;
- (void)setTcuList:(id)a0;
- (void)setTrpCandidateId:(id)a0;
- (id)getRequestId;
- (id)getTcuList;
- (id)getTrpCandidateId;

@end
