@class NSCondition, HalogenMeasurement, NSObject, NSData;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HalogenWrapper : NSObject

@property (nonatomic) NSObject<OS_dispatch_queue> *halogenMeasurementDispatchQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> *halogenTtrDispatchQueue;
@property (nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL attachDelayTimerRunning;
@property (nonatomic) unsigned long long wetPollingIntervalNs;
@property (nonatomic) unsigned long long dryPollingIntervalNs;
@property (nonatomic) unsigned long long ldcmArbiterRetryNs;
@property (nonatomic) unsigned long long ldcmStartMeasurementsDelayNs;
@property (nonatomic) unsigned long long ldcmStartMeasurementsRetryNs;
@property (nonatomic) unsigned long long minDryReadings;
@property (nonatomic) unsigned long long dryCnt;
@property (nonatomic) unsigned long long firstDryTimestamp;
@property (nonatomic) BOOL isWet;
@property (nonatomic) BOOL wasTapToRadarShown;
@property (nonatomic) BOOL isTapToRadarPending;
@property (nonatomic) BOOL isReceptacleEmpty;
@property (nonatomic) unsigned long long wetDryTransitionTimestamp;
@property (nonatomic) BOOL isTimestampValid;
@property (nonatomic) NSCondition *cond;
@property (nonatomic) BOOL isMeasurementEnabled;
@property (nonatomic) BOOL isMeasurementActive;
@property (nonatomic) HalogenMeasurement *halogenMeasurement;
@property (nonatomic) unsigned int service;
@property (nonatomic) int portID;
@property (nonatomic) NSData *eventBasedPDigitalID;
@property (nonatomic) unsigned long long eventBasedDigitalID;
@property (nonatomic) int eventBasedOrientation;
@property (nonatomic) NSData *connectedAccessoryPDigitalID;
@property (nonatomic) unsigned long long connectedAccessoryDigitalID;
@property (nonatomic) int connectedAccessoryOrientation;
@property (nonatomic) int pinID;
@property (nonatomic) BOOL didNotify;
@property (nonatomic) BOOL didConfidentNotify;
@property (nonatomic) BOOL didHighConfidentNotify;
@property (nonatomic) BOOL didWetDuration;
@property (nonatomic) BOOL accessoryConnectedWhileWet;
@property (nonatomic) unsigned long long wetAccessoryAttachTimestamp;
@property (nonatomic) BOOL didWetTooLong;
@property (nonatomic) BOOL isHeadsetConnected;
@property (nonatomic) BOOL isDebugAccessoryConnected;
@property (nonatomic) BOOL isBlacklistedAccessoryConnected;
@property (nonatomic) BOOL justDetached;
@property (nonatomic) BOOL justAttachedCase;
@property (nonatomic) BOOL isPowerAssertionHeld;
@property (nonatomic) unsigned int sleepAssertionID;

- (id)init;
- (void)dealloc;

@end
