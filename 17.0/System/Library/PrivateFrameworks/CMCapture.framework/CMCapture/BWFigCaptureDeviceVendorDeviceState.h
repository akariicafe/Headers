@class NSArray, BWFigCaptureDevice, NSMutableSet, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface BWFigCaptureDeviceVendorDeviceState : NSObject

@property (readonly, nonatomic) BWFigCaptureDevice *device;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *deviceCloseTimer;
@property (nonatomic) int deviceUsageCount;
@property (nonatomic) BOOL inUseForPublishing;
@property (readonly, nonatomic) NSMutableArray *controlledStreams;
@property (readonly, nonatomic) NSMutableArray *streamsToKeepControlled;
@property (readonly, nonatomic) NSMutableArray *streamsInUse;
@property (readonly, nonatomic) NSMutableArray *streamsControlledByOtherClients;
@property (retain, nonatomic) NSMutableArray *portTypesAllowingStreamControlLoss;
@property (readonly, nonatomic) NSArray *streamsRequiringControlControlledByOtherClients;
@property (readonly, nonatomic) NSMutableSet *portTypesToCheckForToFAFEstimator;
@property (readonly, nonatomic) NSMutableDictionary *tofAFEstimatorResultsByPortType;
@property (readonly, nonatomic) NSMutableDictionary *tofAFEstimatorClientApplicationIDByPortType;
@property (readonly, nonatomic) NSMutableSet *portTypesToCheckForAFDriverShortStatistics;
@property (readonly, nonatomic) NSMutableDictionary *afDriverShortStatisticsByPortType;
@property (nonatomic) BOOL shutDownDueToSystemPressure;

- (void)dealloc;
- (id)description;
- (id)initWithDevice:(id)a0;
- (id)debugDescription;

@end
