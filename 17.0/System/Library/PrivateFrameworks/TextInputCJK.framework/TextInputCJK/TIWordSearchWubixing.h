@interface TIWordSearchWubixing : TIWordSearchShapeBased

@property (nonatomic) int wubiStandard;

- (void)dealloc;
- (int)mecabraInputMethodType;
- (id)uncachedCandidatesForOperation:(id)a0;
- (id)mecabraCreationOptionsDictionary;
- (unsigned char)nameReadingPairGenerationMode;
- (void)updateMecabraState;
- (id)autoconvertWubiXingPrefixes:(id)a0 option:(unsigned long long)a1 candidateResultSet:(id)a2 autoconvertedCandidateArray:(id *)a3;
- (void)checkWubiStandard;
- (void *)shouldAutoCommitCode:(id)a0 withOption:(unsigned long long)a1;
- (int)wubiStandardPreference;

@end
