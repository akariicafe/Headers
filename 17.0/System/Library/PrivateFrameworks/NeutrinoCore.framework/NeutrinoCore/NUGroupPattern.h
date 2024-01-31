@class NSArray;

@interface NUGroupPattern : NUPattern

@property (readonly) NSArray *group;

- (id)init;
- (id)stringRepresentation;
- (id)tokens;
- (void).cxx_destruct;
- (id)initWithGroup:(id)a0;
- (BOOL)isEqualToGroupPattern:(id)a0;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
