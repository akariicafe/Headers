@class MTRAttributePath, NSError;

@interface MTRAttributeReport : NSObject

@property (readonly, copy, nonatomic) MTRAttributePath *path;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSError *error;

+ (void)initialize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPath:(const void *)a0 value:(id)a1 error:(id)a2;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;

@end
