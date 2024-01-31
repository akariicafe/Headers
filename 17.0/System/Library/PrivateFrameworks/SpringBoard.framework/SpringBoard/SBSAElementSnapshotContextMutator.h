@class NSString, SBSAElementSnapshotContext;

@interface SBSAElementSnapshotContextMutator : NSObject

@property (readonly, nonatomic) SBSAElementSnapshotContext *elementSnapshotContext;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *elementIdentifier;
@property (copy, nonatomic) NSString *snapshotReason;

- (id)description;
- (void).cxx_destruct;
- (id)initWithElementSnapshotContext:(id)a0;

@end
