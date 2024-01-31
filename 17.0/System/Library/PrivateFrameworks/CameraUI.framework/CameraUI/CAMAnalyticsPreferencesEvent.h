@class CAMCaptureCapabilities;

@interface CAMAnalyticsPreferencesEvent : CAMAnalyticsEvent

@property (readonly, nonatomic) CAMCaptureCapabilities *_capabilities;

- (id)eventName;
- (id)initWithPreferences:(id)a0;
- (void).cxx_destruct;
- (id)_focalLengthStringForCustomLens:(long long)a0;

@end
