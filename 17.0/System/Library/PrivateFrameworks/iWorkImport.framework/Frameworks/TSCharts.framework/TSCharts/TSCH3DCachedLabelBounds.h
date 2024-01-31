@class NSString;

@interface TSCH3DCachedLabelBounds : NSObject

@property (readonly, nonatomic) struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } position;
@property (readonly, nonatomic) struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _min; struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } _max; } labelBox;
@property (readonly, nonatomic) struct tvec2<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; } offset2D;
@property (readonly, copy, nonatomic) NSString *string;

+ (id)boundsWithPosition:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a0 labelBox:(struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; })a1 offset2D:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a2 string:(id)a3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPosition:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a0 labelBox:(struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; })a1 offset2D:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a2 string:(id)a3;
- (struct box<glm::detail::tvec3<float>> { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; })normalizedBoundsWithOffset:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })a0 transforms:(id)a1 viewport:(struct box<glm::detail::tvec2<int>> { struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; })a2;

@end
