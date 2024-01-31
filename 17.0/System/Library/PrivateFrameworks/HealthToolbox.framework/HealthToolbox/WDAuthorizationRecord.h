@class _HKAuthorizationRecord;

@interface WDAuthorizationRecord : NSObject {
    _HKAuthorizationRecord *_internalAuthorizationRecord;
}

@property long long status;

- (id)init;
- (void).cxx_destruct;
- (BOOL)requestedReading;
- (BOOL)requestedSharing;
- (id)initWithInternalAuthorizationRecord:(id)a0;

@end
