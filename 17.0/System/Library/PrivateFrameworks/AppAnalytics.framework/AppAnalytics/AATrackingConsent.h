@interface AATrackingConsent : NSObject {
    void /* unknown type, empty encoding */ accessGroup;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ consented;
}

@property (class, nonatomic, readonly) AATrackingConsent *shared;

- (id)init;
- (void)allow;
- (void).cxx_destruct;

@end
