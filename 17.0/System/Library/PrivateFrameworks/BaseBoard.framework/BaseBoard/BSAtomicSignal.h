@interface BSAtomicSignal : NSObject {
    _Atomic BOOL _flag;
}

- (BOOL)signal;
- (BOOL)hasBeenSignalled;
- (id)init;
- (id)description;

@end
