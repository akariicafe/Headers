@class NSString, UnitRanks;

@interface CalculateToken : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) unsigned long long tokenType;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) UnitRanks *ranks;

+ (id)tokenWithType:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 text:(id)a2 ranks:(id)a3;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 text:(id)a2 ranks:(id)a3;

@end
