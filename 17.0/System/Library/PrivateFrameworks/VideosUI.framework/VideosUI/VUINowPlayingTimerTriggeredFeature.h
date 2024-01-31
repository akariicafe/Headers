@class NSString;

@interface VUINowPlayingTimerTriggeredFeature : NSObject <VUINowPlayingFeature>

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) double duration;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=shouldAutoRemove) BOOL autoRemove;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, nonatomic, getter=isBackgroundTimer) BOOL backgroundTimer;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 duration:(double)a1 repeats:(BOOL)a2;
- (id)initWithType:(unsigned long long)a0 duration:(double)a1 repeats:(BOOL)a2 backgroundTimer:(BOOL)a3;

@end
