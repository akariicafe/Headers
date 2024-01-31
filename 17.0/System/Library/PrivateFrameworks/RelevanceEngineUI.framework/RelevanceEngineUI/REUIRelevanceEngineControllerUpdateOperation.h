@interface REUIRelevanceEngineControllerUpdateOperation : REElementUpdateOperation

@property (readonly, nonatomic) unsigned long long updateType;

+ (id)hideElement:(id)a0 atPath:(id)a1;
+ (id)showElement:(id)a0 atPath:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
