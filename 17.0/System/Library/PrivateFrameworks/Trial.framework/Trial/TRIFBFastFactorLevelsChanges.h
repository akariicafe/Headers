@interface TRIFBFastFactorLevelsChanges : NSObject {
    unsigned char _changeTypeLevels;
    unsigned int _replacementLevels;
    unsigned char _replacementSourceType;
    unsigned char _changeTypeSource;
    unsigned int _replacementSource;
    unsigned char _changeTypeNamespaceName;
    unsigned int _replacementNamespaceName;
    unsigned char _changeTypeNcvs;
    unsigned int _replacementNcvs;
}

- (void)omitNcvs;
- (void)preserveLevels;
- (void)preserveNamespaceName;
- (void)preserveNcvs;
- (void)preserveSource;
- (void)replaceLevels:(id)a0;
- (void)replaceNamespaceName:(id)a0;
- (void)replaceNcvs:(id)a0;
- (void)replaceSourceWithFactorPackId:(id)a0;
- (void)replaceSourceWithTreatmentId:(id)a0;

@end
