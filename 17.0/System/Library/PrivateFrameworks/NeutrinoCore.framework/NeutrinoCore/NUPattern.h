@class NSSet, NSArray, NSString;

@interface NUPattern : NSObject

@property (readonly, nonatomic) NSSet *tokens;
@property (readonly, nonatomic) BOOL isFixedOrder;
@property (readonly, nonatomic) NSArray *shortestMatch;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSString *stringRepresentation;

+ (id)patternWithString:(id)a0 error:(out id *)a1;
+ (BOOL)scanString:(id)a0 intoPattern:(out id *)a1 error:(out id *)a2;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)match:(id)a0;
- (BOOL)isDetermisitic;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;

@end
