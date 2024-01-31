@class FCTopicalNode;

@interface FCTopicalEdge : NSObject {
    unsigned long long _containsAButNotB;
    unsigned long long _containsAAndB;
    unsigned long long _containsBButNotA;
}

@property (retain, nonatomic) FCTopicalNode *a;
@property (retain, nonatomic) FCTopicalNode *b;
@property (nonatomic) BOOL relatednessCalculated;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
