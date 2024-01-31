@interface NAUniqueArrayDiffOptions : NSObject

@property (copy, nonatomic) id /* block */ equalComparator;
@property (copy, nonatomic) id /* block */ hashGenerator;
@property (copy, nonatomic) id /* block */ changeComparator;
@property (nonatomic) BOOL allowMoves;

- (id)init;
- (void).cxx_destruct;

@end
