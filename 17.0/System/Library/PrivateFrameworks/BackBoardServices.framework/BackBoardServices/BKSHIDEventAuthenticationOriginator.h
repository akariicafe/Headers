@class _BKSHIDEventAuthenticationKey;

@interface BKSHIDEventAuthenticationOriginator : NSObject {
    _BKSHIDEventAuthenticationKey *_key;
    double _keyLastAccessTime;
}

- (void).cxx_destruct;
- (id)buildMessage:(id /* block */)a0;
- (long long)validateMessage:(id)a0;

@end
