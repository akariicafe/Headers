@interface ODDLayoutVariablePropertySet : OADProperties {
    int mDirection;
    BOOL mHasDirection;
}

+ (id)defaultProperties;

- (int)direction;
- (id)description;
- (void)setDirection:(int)a0;
- (id)initWithDefaults;
- (BOOL)hasDirection;

@end
