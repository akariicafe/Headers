@class CADisplay, CADynamicFrameRateSource;

@interface _UIUpdateTarget : NSObject {
    struct _UIInstrumentedCADisplay { CADisplay *direct; } _display;
    struct _UIInstrumentedCADynamicFrameRateSource { CADynamicFrameRateSource *direct; } _frameSource;
    unsigned int _displayId;
    BOOL _frameSourceActive;
    unsigned long long _epsilonDuration;
    unsigned long long _minFrameDuration;
    long long _presentationLagDuration[2];
    long long _commitTimeLeadDuration;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
