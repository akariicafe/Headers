@class NSString, NSArray, AFMultiUserStateSnapshot, NSNumber;

@interface _AFMultiUserStateSnapshotMutation : NSObject <AFMultiUserStateSnapshotMutating> {
    AFMultiUserStateSnapshot *_base;
    NSNumber *_vtSatScore;
    NSArray *_confidenceScores;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasVtSatScore : 1; unsigned char hasConfidenceScores : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (id)getConfidenceScores;
- (id)getVtSatScore;
- (void)setConfidenceScores:(id)a0;
- (void)setVtSatScore:(id)a0;

@end
