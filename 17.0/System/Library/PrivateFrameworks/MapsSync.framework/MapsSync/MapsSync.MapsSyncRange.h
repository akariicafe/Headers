@interface MapsSync.MapsSyncRange : NSObject {
    void /* unknown type, empty encoding */ _range;
}

@property (nonatomic, readonly) long long offset;
@property (nonatomic, readonly) long long limit;

- (id)init;
- (id)initWithOffset:(long long)a0 limit:(long long)a1;

@end
