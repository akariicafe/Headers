@class NSString;

@interface VUINowPlayingHybridFeature : NSObject <VUINowPlayingHybridFeature>

@property (nonatomic) unsigned long long type;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=shouldAutoRemove) BOOL autoRemove;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) double duration;
@property (nonatomic, getter=isSkippable) BOOL skippable;
@property (nonatomic) unsigned long long activationType;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 startTime:(double)a1 duration:(double)a2;

@end
