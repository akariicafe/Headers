@class _PASLock, NSString, _ATXDuetHelper;

@interface ATXAppLaunchMicroLocation : NSObject {
    _PASLock *_lock;
    _ATXDuetHelper *_duetHelper;
    NSString *_path;
}

- (void)train;
- (id)init;
- (BOOL)_loadCorrelationMatrices;
- (void)_receivedNotificationOfNewMicroLocation;
- (void)_subscribeToDKInsertionEvents;
- (id)initWithDuetHelper:(id)a0 directory:(id)a1 forTesting:(BOOL)a2;
- (void)tryLoadCorrelationMatricesImmediately;
- (id)_getActionKeyCorrelationMatrix;
- (double)popularityAtCurrentMicroLocationForApp:(id)a0;
- (id)_getHistoricalData;
- (void).cxx_destruct;
- (id)_getAppLaunchCorrelationMatrix;
- (void)_writeAppLaunchCorrelationMatrix:(id)a0 actionKeyCorrelationMatrix:(id)a1;
- (double)popularityAtCurrentMicroLocationForActionKey:(id)a0;

@end
