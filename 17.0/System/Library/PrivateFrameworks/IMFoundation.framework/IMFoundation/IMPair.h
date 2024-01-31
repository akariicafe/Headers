@interface IMPair : NSObject <NSCopying>

@property (retain) id first;
@property (retain) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
