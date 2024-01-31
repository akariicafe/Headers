@interface DockKitCore.Vector3 : NSObject {
    void /* unknown type, empty encoding */ x;
    void /* unknown type, empty encoding */ y;
    void /* unknown type, empty encoding */ z;
}

@property (nonatomic, readonly) long long hash;

- (id)init;
- (id)initWithX:(double)a0 y:(double)a1 z:(double)a2;
- (BOOL)isEqual:(id)a0;

@end
