@class GDScoredPersonInner;

@interface GDScoredPersonEntity : NSObject {
    GDScoredPersonInner *inner;
}

@property (readonly, nonatomic) long long idValue;
@property (readonly, nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithIDValue:(long long)a0 score:(double)a1;

@end
