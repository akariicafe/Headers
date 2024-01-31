@class NSUUID, NSString, NSData, NSDate, HMBModelCountMatchesQuery, NSArray, HMBStreamingAsset, NSNumber, HMBModelInfiniteQuery;

@interface HMDCameraClipModel : HMBModel

@property (class, readonly) NSUUID *sentinelParentUUID;
@property (class, readonly) HMBModelInfiniteQuery *incompleteClipsQuery;
@property (class, readonly) HMBModelInfiniteQuery *clipsWithNeedsUploadFeedbackStatusQuery;
@property (class, readonly) HMBModelInfiniteQuery *clipsBeforeDateQuery;
@property (class, readonly) HMBModelInfiniteQuery *clipsWithQualityBetweenDatesAscendingQuery;
@property (class, readonly) HMBModelInfiniteQuery *clipsWithQualityBetweenDatesDescendingQuery;
@property (class, readonly) HMBModelCountMatchesQuery *countOfClipsWithQualityBetweenDatesQuery;

@property (retain, nonatomic) NSNumber *feedbackStatusField;
@property (retain, nonatomic) NSNumber *qualityField;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSNumber *isComplete;
@property unsigned long long feedbackStatus;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *targetFragmentDuration;
@property (retain, nonatomic) NSNumber *maximumClipDuration;
@property (retain, nonatomic) NSNumber *recordedLocally;
@property (retain, nonatomic) NSString *streamingAssetVersion;
@property (retain, nonatomic) NSData *encryptionKey;
@property (retain, nonatomic) NSNumber *encryptionScheme;
@property (retain, nonatomic) HMBStreamingAsset *videoStreamingAsset;
@property (retain, nonatomic) NSArray *videoMetadata;
@property (retain, nonatomic) NSArray *videoMetadataArray;
@property long long quality;

+ (id)hmbProperties;
+ (id)hmbExternalRecordType;
+ (id)hmbQueries;
+ (id)qualityPredicate;

- (id)createClipWithSignificantEvents:(id)a0;

@end
