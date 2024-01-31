@class NSString;

@interface HMDBackgroundOperationDataSource : NSObject <HMDBackgroundOperationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentDate;
- (id)dateWithTimeIntervalSinceNow:(double)a0;
- (double)timeIntervalSinceNowToDate:(id)a0;

@end
