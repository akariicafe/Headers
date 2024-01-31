@interface FBProcessExecutableSlice : NSObject

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int subtype;

+ (id)arm64;
+ (id)arm64e;
+ (id)sliceWithType:(int)a0;
+ (id)sliceWithType:(int)a0 subtype:(int)a1;

- (id)description;

@end
