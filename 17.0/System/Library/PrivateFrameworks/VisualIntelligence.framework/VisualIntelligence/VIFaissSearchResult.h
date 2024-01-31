@class NSArray;

@interface VIFaissSearchResult : NSObject <NSCopying>

@property (nonatomic) long long identifier;
@property (nonatomic) float distance;
@property (copy, nonatomic) NSArray *embedding;
@property (copy, nonatomic) NSArray *residual;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(long long)a0 distance:(float)a1 embedding:(id)a2 residual:(id)a3;

@end
