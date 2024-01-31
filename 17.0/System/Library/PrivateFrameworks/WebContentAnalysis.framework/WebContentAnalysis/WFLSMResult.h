@class NSNumber, NSMutableArray;

@interface WFLSMResult : NSObject {
    NSMutableArray *categoryJudgements;
}

@property (copy) NSNumber *threshold;

+ (id)LSMResultWithLSMResultRef:(struct __LSMResult { } *)a0 threshold:(id)a1;
+ (id)extractScoresFromLSMResults:(struct __LSMResult { } *)a0;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (BOOL)isRestricted;
- (long long)numberOfCategories;
- (id)initWithLSMResultRef:(struct __LSMResult { } *)a0 threshold:(id)a1;
- (long long)bestMatchingCategory;
- (float)scoreForCategory:(long long)a0;
- (void)setScore:(float)a0 forCategory:(long long)a1;

@end
