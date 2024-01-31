@interface PDIterate : NSObject {
    int mType;
    BOOL mIsBackwards;
    BOOL mIsPercentage;
    double mValue;
}

- (void)setType:(int)a0;
- (unsigned long long)hash;
- (double)value;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (void)setValue:(double)a0;
- (BOOL)isBackwards;
- (void)setIsBackwards:(BOOL)a0;
- (BOOL)isValuePercentage;
- (void)setIsValuePercentage:(BOOL)a0;

@end
