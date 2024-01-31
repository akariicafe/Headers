@class NSString;

@interface NUTokenPattern : NUPattern

@property (readonly) NSString *token;

- (id)initWithToken:(id)a0;
- (id)init;
- (id)stringRepresentation;
- (id)tokens;
- (void).cxx_destruct;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isEqualToTokenPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
