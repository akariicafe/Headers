@class NTKComplicationController;

@interface NTKComplicationControllerAssertion : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _lock_dataMode;
    BOOL _lock_invalidated;
}

@property (readonly, nonatomic) NTKComplicationController *controller;
@property (readonly, nonatomic) BOOL invalidated;
@property (nonatomic) long long dataMode;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithController:(id)a0 dataMode:(long long)a1;

@end
