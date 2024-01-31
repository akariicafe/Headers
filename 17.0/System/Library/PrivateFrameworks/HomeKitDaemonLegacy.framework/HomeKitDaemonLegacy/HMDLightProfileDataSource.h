@class NSTimeZone, NSString, NSDictionary, NSDate;

@interface HMDLightProfileDataSource : HMFObject <HMDLightProfileDataSource>

@property (readonly, copy) NSDate *date;
@property (readonly, copy) NSTimeZone *localTimeZone;
@property (readonly) NSDictionary *naturalLightingCurveResourceFileContent;
@property (readonly) double naturalLightingCurveUpdateInterval;
@property (readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
@property (readonly) long long naturalLightingEnabledMaxRetryCount;
@property (readonly) double naturalLightingEnabledRetryInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dispatchAfterTimeInterval:(double)a0 queue:(id)a1 block:(id /* block */)a2;
- (unsigned long long)millisecondsElapsedSinceStartOfDayWithDate:(id)a0 timeZone:(id)a1;

@end
