@class NSString;
@protocol BLSBacklightProxy;

@interface BLSBacklight : NSObject <BLSBacklightStateObservable, BLSBacklightChangeRequestable> {
    id<BLSBacklightProxy> _backlightProxy;
}

@property (readonly, nonatomic) long long backlightState;
@property (readonly, nonatomic) long long flipbookState;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) BOOL deviceSupportsAlwaysOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDefaultBacklightProxy:(id)a0;
+ (id)sharedBacklight;

- (id)init;
- (void)removeObserver:(id)a0;
- (id)performChangeRequest:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
