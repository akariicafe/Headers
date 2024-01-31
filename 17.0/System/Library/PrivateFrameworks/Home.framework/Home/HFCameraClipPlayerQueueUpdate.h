@class NSArray, NSDictionary, HFUniqueArrayDiff, HFCameraClipPosition;
@protocol HFCameraClipManager;

@interface HFCameraClipPlayerQueueUpdate : NSObject

@property (readonly, nonatomic) id<HFCameraClipManager> clipManager;
@property (readonly, nonatomic) NSDictionary *initialQueuedItemsByClipID;
@property (retain, nonatomic) HFUniqueArrayDiff *queueDiff;
@property (retain, nonatomic) NSArray *updatedClipQueue;
@property (nonatomic) BOOL hasQueueChanges;
@property (nonatomic) BOOL queueChangesRequireRebuild;
@property (readonly, nonatomic) NSArray *clips;
@property (readonly, nonatomic) HFCameraClipPosition *targetPosition;
@property (readonly, nonatomic) NSArray *initialQueuedItems;
@property (readonly, nonatomic) unsigned long long queueLimit;

- (void).cxx_destruct;
- (id)_buildNewClipQueueForPosition:(id)a0;
- (void)_computeQueueDiff;
- (id)initWithClipManager:(id)a0 clips:(id)a1 targetPosition:(id)a2 queuedItems:(id)a3 queueLimit:(unsigned long long)a4;
- (void)performUpdatesOnQueue:(id)a0;

@end
