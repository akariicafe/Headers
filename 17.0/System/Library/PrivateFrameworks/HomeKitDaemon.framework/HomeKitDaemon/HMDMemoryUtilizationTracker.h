@class NSString;
@protocol HMMLogEventSubmitting;

@interface HMDMemoryUtilizationTracker : NSObject <HMFLogging>

@property (readonly, weak) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
