@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CellOutrankForceSPIHandler : NSObject {
    NSObject<OS_dispatch_source> *_forcePreferCellOverWiFiTimer;
}

@property (nonatomic) BOOL cellOutrankForcedViaSPI;
@property (nonatomic) double cellOutrankForcedViaSPIUntil;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)deletePreferCellOverWiFiSettings;
- (void)handlePreferCellOverWiFi:(BOOL)a0 until:(double)a1 updateDB:(BOOL)a2;
- (void)setForcePreferCellOverWiFi:(BOOL)a0 autoDisableTimestamp:(double)a1;

@end
