@class NSString, NSMapTable;

@interface CKDProgressTracker : NSObject

@property (nonatomic) BOOL hasCachedTotalBytes;
@property (nonatomic) BOOL hasCachedCompletedBytes;
@property (nonatomic) unsigned long long cachedTotalBytes;
@property (nonatomic) unsigned long long cachedCompletedBytes;
@property (retain, nonatomic) NSMapTable *completedBytesByItems;
@property (retain, nonatomic) NSString *trackingID;
@property (nonatomic) double lastItemPercentage;

+ (unsigned long long)_sizeForItem:(id)a0;

- (id)init;
- (void)startTrackingItems:(id)a0;
- (void)stopTrackingItems:(id)a0;
- (unsigned long long)_updateTotalBytes;
- (void).cxx_destruct;
- (double)updateProgressWithItem:(id)a0 progress:(double)a1;
- (unsigned long long)_updateTotalCompletedBytes;
- (id)initWithTrackingID:(id)a0;

@end
