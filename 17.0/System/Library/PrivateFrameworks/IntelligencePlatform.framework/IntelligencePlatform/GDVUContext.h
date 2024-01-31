@class NSUUID;

@interface GDVUContext : NSObject {
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, copy) NSUUID *moment;
@property (nonatomic, copy) NSUUID *asset;
@property (nonatomic) long long source;

- (id)init;
- (void).cxx_destruct;

@end
