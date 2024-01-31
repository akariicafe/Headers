@class NSMutableArray;

@interface TSCH3DArray2D : NSObject {
    NSMutableArray *_elements;
}

@property (readonly, nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;

+ (id)array2D;
+ (id)array2DWithSize:(const void *)a0;

- (id)initWithSize:(const void *)a0;
- (id)objectAtIndex:(const void *)a0;
- (id).cxx_construct;
- (id)firstObject;
- (void).cxx_destruct;
- (void)setObject:(id)a0 atIndex:(const void *)a1;
- (void)resize:(const void *)a0;
- (BOOL)hasObjectAtIndex:(const void *)a0;

@end
