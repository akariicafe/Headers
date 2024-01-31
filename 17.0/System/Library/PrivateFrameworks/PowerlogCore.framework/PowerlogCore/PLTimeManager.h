@class NSString, NSDictionary, PLSQLiteConnection, PLStorageOperator;

@interface PLTimeManager : NSObject <PLTimeReferenceManager>

@property (weak) PLSQLiteConnection *connection;
@property (retain) NSDictionary *timeReferences;
@property (retain) NSDictionary *notificationsToTimeReferences;
@property (weak) PLStorageOperator *storageOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)storageQueue;
- (id)init;
- (void)getBootSessionUUID;
- (double)hourBucketBaseSnapOffsetWithMonotonicTime:(long long)a0;
- (void)registerForTimeChangedCallbackWithIdentifier:(id)a0 forTimeReference:(long long)a1 usingBlock:(id /* block */)a2;
- (int)bucketTimeStampForDate:(id)a0 withTimeReference:(long long)a1 withBucketInterval:(int)a2;
- (double)timeZoneHourBucketShift:(double)a0;
- (void)unregisterForTimeChangedCallbackWithIdentifier:(id)a0 forTimeReference:(long long)a1;
- (id)initialMonotonicTime;
- (void)initializeTimeOffsets;
- (id)bucketNSDate:(id)a0 withBucketInterval:(int)a1;
- (void).cxx_destruct;
- (id)currentTimeFromTimeReference:(long long)a0 toTimeReference:(long long)a1;
- (double)hourBucketBaseSnapOffsetWithMonotonicTimeNow:(long long)a0;
- (double)timeOffsetForTimeReference:(long long)a0;
- (void)logTimeEntry;
- (id)convertTime:(id)a0 fromTimeReference:(long long)a1 toTimeReference:(long long)a2;

@end
