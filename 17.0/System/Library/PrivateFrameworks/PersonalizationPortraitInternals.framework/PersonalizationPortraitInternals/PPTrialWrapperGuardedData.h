@class NSMutableDictionary, NSString, TRITrackingId, NSDate, NSMutableArray;

@interface PPTrialWrapperGuardedData : NSObject {
    TRITrackingId *trackingId;
    NSMutableArray *notificationTokens;
    NSMutableDictionary *pathOverrides;
    NSDate *mostRecentUpdateDate;
    NSString *concatenatedTreatmentNames;
    unsigned int treatmentsHash;
}

- (void).cxx_destruct;

@end
