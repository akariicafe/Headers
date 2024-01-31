@interface SGSlice : NSObject

@property (readonly, nonatomic) struct { unsigned short category; unsigned short subtype; } type;
@property (readonly, nonatomic) unsigned long long start;
@property (readonly, nonatomic) unsigned long long end;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

+ (id)sliceWithType:(struct { unsigned short x0; unsigned short x1; })a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)sliceWithType:(struct { unsigned short x0; unsigned short x1; })a0 start:(unsigned long long)a1 end:(unsigned long long)a2;

- (long long)compare:(id)a0;
- (id)description;
- (id)initWithType:(struct { unsigned short x0; unsigned short x1; })a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithType:(struct { unsigned short x0; unsigned short x1; })a0 start:(unsigned long long)a1 end:(unsigned long long)a2;

@end
