@class HMMDateProvider, NSString;

@interface HMDLogEventWeekBasedFilter : NSObject <HMMLogEventFiltering>

@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
