@class NSObject;

@interface _PASTuple2 : NSObject <NSCopying>

@property (readonly, nonatomic) NSObject *first;
@property (readonly, nonatomic) NSObject *second;

+ (id)tupleWithFirst:(id)a0 second:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToTuple2:(id)a0;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
