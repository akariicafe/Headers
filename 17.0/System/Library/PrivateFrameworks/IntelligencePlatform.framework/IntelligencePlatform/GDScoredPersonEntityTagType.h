@class GDScoredPersonEntityTagInner;

@interface GDScoredPersonEntityTagType : NSObject {
    GDScoredPersonEntityTagInner *inner;
}

@property (readonly, nonatomic) long long tag;
@property (readonly, nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithTag:(long long)a0 score:(double)a1;

@end
