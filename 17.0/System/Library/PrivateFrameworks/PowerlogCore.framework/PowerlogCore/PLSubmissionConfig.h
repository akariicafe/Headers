@class NSString, NSDictionary, NSUUID, NSDate, NSNumber, NSArray;

@interface PLSubmissionConfig : NSObject {
    unsigned long long _submittedFilesMask;
}

@property double dice;
@property (retain) NSString *taskingBuild;
@property (retain) NSString *taskingPopulation;
@property (retain) NSString *taskingDeviceModels;
@property (retain) NSDictionary *taskingPercentage;
@property BOOL isDRTasking;
@property (retain) NSUUID *configUUID;
@property (retain) NSDate *configDateReceived;
@property (retain) NSDate *configDateApplied;
@property (retain) NSString *request;
@property (retain) NSString *ondemand;
@property (retain) NSNumber *capSize;
@property (retain) NSDictionary *taskingTables;
@property (retain) NSDictionary *hashEntries;
@property (retain) NSArray *removeEntries;
@property (retain) NSArray *trimmingQueries;
@property (retain) NSString *taskingType;
@property (retain) NSDictionary *defaultTaskingTypeParameters;
@property (retain) NSDictionary *perModelTaskingTypeParameters;
@property (retain) NSArray *taskingFiles;
@property (readonly) BOOL hasFileToSubmit;
@property (readonly) BOOL submitPLL;
@property (readonly) BOOL submitMSS;
@property (readonly) BOOL submitSP;
@property (readonly) BOOL submitBDC;
@property (readonly) BOOL submitCE;
@property (readonly) unsigned long long submittedFilesMask;
@property BOOL enableDPUpload;
@property BOOL signpostDisable;
@property (retain) NSDictionary *signpostAllowlist;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) NSDate *lastBatteryTimestampSystem;
@property (retain) NSNumber *cacheSize;
@property short submitReasonType;
@property (retain) NSString *tagUUID;
@property BOOL seed;
@property BOOL internal;
@property (retain) NSArray *builds;
@property (retain) NSString *deviceModel;
@property (retain) NSString *filePath;
@property (retain) NSDictionary *ckTagConfig;
@property (retain) NSString *blobFailureReason;

+ (BOOL)internalSubmissionBehavior;
+ (void)clearTaskingDefaults;
+ (id)getDateMarkerFromSystemDate:(id)a0;
+ (void)submitTaskingDefaultsCheckStateToCA:(id)a0;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (void)emitQueryEvent:(BOOL)a0;
- (void)emitSubmitEvent;
- (BOOL)conditionCheckForEnergy;
- (BOOL)conditionCheckForTaskingType:(id)a0;
- (void)emitTaskingTypeSpecifiedEvent;
- (id)getDateMarker;
- (id)getDateMarkerLegacy;
- (id)getSubmitReasonTypeToCAFieldValue;
- (id)getSubmitReasonTypeToFlushReason;
- (id)getSubmitReasonTypeToReasonLog;
- (id)getSubmitReasonTypeToStorageEventOTAType;
- (void)initTagInfoForReasonType:(short)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (id)initWithReasonType:(short)a0 DRConfig:(id)a1;
- (void)initializeFilesToBeSubmitted;
- (BOOL)isValidSubmissionFilesMask;
- (BOOL)isValidTaskingBlob;
- (void)readTaskingDefaults;
- (void)readTaskingPayloadOverride:(id)a0;
- (BOOL)shouldStartTaskingToday;
- (BOOL)shouldSubmitToday;
- (void)submitFileStatsToAnalytics;

@end
