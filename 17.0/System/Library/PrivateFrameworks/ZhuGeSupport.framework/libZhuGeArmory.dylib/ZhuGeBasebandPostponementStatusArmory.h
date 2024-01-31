@class NSDictionary;

@interface ZhuGeBasebandPostponementStatusArmory : ZhuGeSingletonArmory

@property (retain) NSDictionary *postponementStatus;

+ (id)convertToPostponementKey:(id)a0;
+ (id)query:(id)a0 isCachable:(BOOL)a1 withError:(id *)a2;

- (void).cxx_destruct;
- (BOOL)loadPostponementStatus:(id *)a0;
- (id)query:(id)a0 isCachable:(BOOL)a1 withError:(id *)a2;

@end
