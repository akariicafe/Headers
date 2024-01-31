@interface TSCEConfiguration : NSObject {
    BOOL mWarnWhenFormulasReferToEmptyCells;
}

+ (id)sharedCalculationEngineConfiguration;

- (id)init;
- (void)setWarnWhenFormulasReferToEmptyCells:(BOOL)a0;
- (BOOL)warnWhenFormulasReferToEmptyCells;

@end
