@interface PKVectorTimestampElement : NSObject

@property (nonatomic) unsigned long long clock;
@property (nonatomic) unsigned long long subclock;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
