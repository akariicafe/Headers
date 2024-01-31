@class MTLSPath, NSMutableDictionary;

@interface MTLSAnimatablePathCollection : NSObject {
    struct vector<ControlPoint, std::allocator<ControlPoint>> { struct ControlPoint *__begin_; struct ControlPoint *__end_; struct __compressed_pair<ControlPoint *, std::allocator<ControlPoint>> { struct ControlPoint *__value_; } __end_cap_; } _controlPointStateVector;
}

@property (readonly) NSMutableDictionary *paths;
@property (readonly) MTLSPath *defaultPath;
@property (nonatomic) struct ControlPoint { float x0; } *controlPointState;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removePath:(id)a0;
- (void)setPath:(id)a0 forKey:(id)a1;
- (id)initWithDefaultPath:(id)a0;
- (struct ControlPoint { float x0; } *)blendPath:(id)a0 withPath:(id)a1 byAmount:(float)a2;

@end
