@class NSString, SMTContinuityEnd;

@interface _SMTContinuityEndMutation : NSObject <SMTContinuityEndMutating> {
    SMTContinuityEnd *_base;
    unsigned long long _generatedHostTime;
    NSString *_lastTRPCandidateId;
    NSString *_requestId;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasGeneratedHostTime : 1; unsigned char hasLastTRPCandidateId : 1; unsigned char hasRequestId : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (void)setRequestId:(id)a0;
- (void)setLastTRPCandidateId:(id)a0;
- (unsigned long long)getGeneratedHostTime;
- (id)getLastTRPCandidateId;
- (id)getRequestId;
- (void)setGeneratedHostTime:(unsigned long long)a0;

@end
