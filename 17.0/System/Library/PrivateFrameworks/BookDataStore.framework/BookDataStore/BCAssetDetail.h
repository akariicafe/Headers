@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BCAssetDetail : BCCloudData <BCAssetDetail>

@property (copy, nonatomic) NSString *assetID;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) BOOL notFinished;
@property (copy, nonatomic) NSDate *lastOpenDate;
@property (copy, nonatomic) NSDate *dateFinished;
@property (nonatomic) short taste;
@property (nonatomic) short tasteSyncedToStore;
@property (nonatomic) float readingProgress;
@property (nonatomic) float readingProgressHighWaterMark;
@property (copy, nonatomic) NSString *readingPositionCFIString;
@property (copy, nonatomic) NSString *readingPositionAnnotationVersion;
@property (copy, nonatomic) NSString *readingPositionAssetVersion;
@property (copy, nonatomic) NSData *readingPositionUserData;
@property (nonatomic) int readingPositionLocationRangeStart;
@property (nonatomic) int readingPositionLocationRangeEnd;
@property (nonatomic) int readingPositionAbsolutePhysicalLocation;
@property (copy, nonatomic) NSString *readingPositionStorageUUID;
@property (copy, nonatomic) NSDate *readingPositionLocationUpdateDate;
@property (copy, nonatomic) NSDate *datePlaybackTimeUpdated;
@property (nonatomic) double bookmarkTime;
@property (readonly, nonatomic) BOOL isAudiobook;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) long long editGeneration;
@property (readonly, nonatomic) long long syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (weak, nonatomic) id<BCCloudDataPrivacyDelegate> privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyIDKey;

- (id)zoneName;
- (id)recordType;
- (id)mutableCopy;
- (id)identifier;
- (void)_configureFromAssetDetail:(id)a0 withMergers:(id)a1;
- (void)configureFromCloudData:(id)a0 withMergers:(id)a1;
- (BOOL)isEqualExceptForDate:(id)a0 ignoringEmptySalt:(BOOL)a1;
- (void)resolveConflictsFromRecord:(id)a0 withResolvers:(id)a1;
- (BOOL)setDifferentBookmarkTime:(double)a0;

@end
