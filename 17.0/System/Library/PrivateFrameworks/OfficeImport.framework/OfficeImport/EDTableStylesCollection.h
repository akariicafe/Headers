@class NSString;

@interface EDTableStylesCollection : EDCollection {
    NSString *mDefaultTableStyleName;
    NSString *mDefaultPivotStyleName;
}

- (id)objectWithName:(id)a0;
- (void).cxx_destruct;
- (id)defaultPivotStyle;
- (id)defaultPivotStyleName;
- (id)defaultTableStyle;
- (id)defaultTableStyleName;
- (void)setDefaultPivotStyleName:(id)a0;
- (void)setDefaultTableStyleName:(id)a0;

@end
