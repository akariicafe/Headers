@class NSString, CLLocationManager;

@interface MapsSuggestionsMapsLocationAllowedTriggeringToggle : MapsSuggestionsTriggeringToggle <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (void)dealloc;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (BOOL)isTrue;
- (void).cxx_destruct;

@end
