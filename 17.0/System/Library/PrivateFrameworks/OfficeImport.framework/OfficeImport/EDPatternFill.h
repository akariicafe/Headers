@class EDColorReference;

@interface EDPatternFill : EDFill {
    int mType;
    EDColorReference *mBackColorReference;
    EDColorReference *mForeColorReference;
}

+ (id)patternFillWithType:(int)a0 foreColor:(id)a1 backColor:(id)a2 resources:(id)a3;
+ (id)patternFillWithType:(int)a0 foreColor:(id)a1 resources:(id)a2;
+ (id)patternFillWithType:(int)a0 foreColorReference:(id)a1 backColorReference:(id)a2 resources:(id)a3;
+ (id)patternFillWithType:(int)a0 resources:(id)a1;

- (void)setType:(int)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)initWithResources:(id)a0;
- (id)backColor;
- (id)backColorReference;
- (id)foreColor;
- (id)foreColorReference;
- (id)initWithType:(int)a0 foreColor:(id)a1 backColor:(id)a2 resources:(id)a3;
- (id)initWithType:(int)a0 foreColorReference:(id)a1 backColorReference:(id)a2 resources:(id)a3;
- (BOOL)isEqualToPatternFill:(id)a0;
- (void)setBackColor:(id)a0;
- (void)setBackColorReference:(id)a0;
- (void)setForeColor:(id)a0;
- (void)setForeColorReference:(id)a0;

@end
