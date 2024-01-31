@class NSObject;

@interface FBKDraftModelSnapshotSection : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSObject *object;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 object:(id)a1;

@end
