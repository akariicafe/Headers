@interface CNAtomicToggle : NSObject {
    _Atomic BOOL _state;
}

- (id)init;
- (unsigned long long)hash;
- (id)initWithState:(BOOL)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)trySetState:(BOOL)a0;

@end
