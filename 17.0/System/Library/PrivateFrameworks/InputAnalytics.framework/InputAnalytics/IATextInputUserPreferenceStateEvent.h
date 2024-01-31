@class NSString;

@interface IATextInputUserPreferenceStateEvent : NSObject <IATelemetryEvent>

@property (retain) NSString *preferenceName;
@property long long preferenceValue;

- (void).cxx_destruct;
- (void)dispatchEvent:(id /* block */)a0;
- (BOOL)isDispatchable;
- (void)resetMeasures;

@end
