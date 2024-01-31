@interface TSDTextPosition : UITextPosition

@property (readonly, nonatomic) unsigned long long charIndex;
@property (readonly, nonatomic) BOOL endOfLineAffinity;
@property (readonly, nonatomic) float preferredPosition;
@property (readonly, nonatomic) BOOL isPreferredStart;

+ (id)textPositionWithCharIndex:(unsigned long long)a0;
+ (id)textPositionWithCharIndex:(unsigned long long)a0 eolAffinity:(BOOL)a1 preferredPosition:(float)a2 isPreferredStart:(BOOL)a3;

- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)distanceFromPosition:(id)a0;
- (id)initWithCharIndex:(unsigned long long)a0;
- (id)initWithCharIndex:(unsigned long long)a0 eolAffinity:(BOOL)a1 preferredPosition:(float)a2 isPreferredStart:(BOOL)a3;

@end
