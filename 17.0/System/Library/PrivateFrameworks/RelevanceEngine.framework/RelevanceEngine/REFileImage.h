@class NSString;

@interface REFileImage : REImage

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) double scale;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPath:(id)a0 scale:(double)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
