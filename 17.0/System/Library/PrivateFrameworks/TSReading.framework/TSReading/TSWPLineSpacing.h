@interface TSWPLineSpacing : NSObject <NSCopying> {
    int _mode;
    double _amount;
    double _baselineRule;
}

+ (id)lineSpacing;

- (id)init;
- (int)mode;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)amount;
- (id)initWithMode:(int)a0 amount:(double)a1;
- (double)baselineRule;
- (id)initWithMode:(int)a0 amount:(double)a1 baselineRule:(double)a2;

@end
