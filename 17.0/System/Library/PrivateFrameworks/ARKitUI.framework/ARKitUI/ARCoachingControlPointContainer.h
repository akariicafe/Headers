@interface ARCoachingControlPointContainer : NSObject {
    struct vector<ARCoachingControlPoint, std::allocator<ARCoachingControlPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<ARCoachingControlPoint *, std::allocator<ARCoachingControlPoint>> { struct *__value_; } __end_cap_; } _controlPoints;
}

@property (readonly, nonatomic) struct { float x0; } *controlPoints;
@property (readonly, nonatomic) unsigned int numControlPoints;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithControlPoints:(struct { float x0; } *)a0 numControlPoints:(int)a1;
- (void)overwriteWithControlPoints:(struct { float x0; } *)a0 numControlPoints:(int)a1;

@end
