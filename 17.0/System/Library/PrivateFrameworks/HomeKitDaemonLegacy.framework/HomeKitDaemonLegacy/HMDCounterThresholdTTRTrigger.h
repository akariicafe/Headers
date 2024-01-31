@class NSString;
@protocol HMDRadarInitiating;

@interface HMDCounterThresholdTTRTrigger : NSObject <HMMCounterObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) NSString *radarTitle;
@property (readonly, nonatomic) NSString *componentName;
@property (readonly, nonatomic) NSString *componentVersion;
@property (readonly, nonatomic) NSString *componentID;
@property (readonly, weak, nonatomic) id<HMDRadarInitiating> radarInitiator;
@property (readonly, nonatomic) long long activeThreshold;
@property (nonatomic) long long targetThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
