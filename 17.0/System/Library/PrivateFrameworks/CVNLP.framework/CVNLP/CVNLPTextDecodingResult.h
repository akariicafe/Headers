@class NSArray;

@interface CVNLPTextDecodingResult : NSObject

@property (readonly, nonatomic) NSArray *candidates;

- (long long)count;
- (void).cxx_destruct;
- (id)initWithCandidates:(id)a0;

@end
