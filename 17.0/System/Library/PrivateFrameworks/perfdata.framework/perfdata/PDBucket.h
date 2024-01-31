@class NSString;

@interface PDBucket : NSObject

@property (nonatomic) double lowerInclusiveBound;
@property (nonatomic) double upperBound;
@property (nonatomic) BOOL hasInclusiveUpperBound;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) double lowerInclusiveBound;
@property (nonatomic) double upperBound;
@property (nonatomic) BOOL hasInclusiveUpperBound;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;

@end
