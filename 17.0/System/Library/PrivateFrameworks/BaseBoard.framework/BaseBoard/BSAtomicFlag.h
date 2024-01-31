@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (id)initWithFlag:(BOOL)a0;
- (id)init;
- (BOOL)getFlag;
- (BOOL)setFlag:(BOOL)a0;
- (id)description;

@end
