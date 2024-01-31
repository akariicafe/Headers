@class NSArray;

@interface TNTheme : TSATheme {
    NSArray *mTablePrototypes;
}

@property (retain, nonatomic) NSArray *tablePrototypes;

+ (void)initialize;

- (void)saveToArchiver:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)bootstrapBlackHardCodedTheme;
- (void)bootstrapWhiteHardCodedTheme;
- (void)p_initDefaultHardCodedStyles;

@end
