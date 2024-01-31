@class FBKDraftModelSnapshotSection, NSObject;

@interface FBKDraftModelSnapshotRow : NSObject

@property (retain, nonatomic) FBKDraftModelSnapshotSection *section;
@property (retain, nonatomic) NSObject *object;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSection:(id)a0 object:(id)a1;

@end
