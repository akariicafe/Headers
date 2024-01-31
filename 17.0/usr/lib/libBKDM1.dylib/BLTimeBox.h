@class NSDate;

@interface BLTimeBox : NSObject

@property (readonly, retain) NSDate *systemStartDate;
@property (readonly) BOOL clockChanged;
@property double lastMachCorrection;
@property (retain) NSDate *idleStartDate;

- (id)init;
- (void)dealloc;
- (id)date;
- (void).cxx_destruct;
- (double)idleTimeAtDate:(id)a0;
- (double)clockOffset;
- (id)dateFromAbsoluteTime:(unsigned long long)a0 hasNanoseconds:(unsigned long long *)a1;
- (id)getSystemStartDate;
- (double)machCorrectionWithCheck;
- (double)synchronizeToClock;
- (void)systemClockChanged:(id)a0;

@end
