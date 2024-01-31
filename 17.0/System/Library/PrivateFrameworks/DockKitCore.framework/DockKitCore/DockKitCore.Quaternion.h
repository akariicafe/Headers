@interface DockKitCore.Quaternion : NSObject {
    void /* unknown type, empty encoding */ x;
    void /* unknown type, empty encoding */ y;
    void /* unknown type, empty encoding */ z;
    void /* unknown type, empty encoding */ w;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithX:(double)a0 y:(double)a1 z:(double)a2 w:(double)a3;

@end
