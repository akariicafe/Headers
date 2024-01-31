@interface ICCRRegisterGreatest : ICCRRegisterLatest

- (void)setContents:(id)a0;
- (long long)compare:(id)a0 with:(id)a1;
- (void)mergeWith:(id)a0;
- (void)mergeWithRegisterGreatest:(id)a0;
- (void)encodeWithICCRCoder:(id)a0;
- (id)initWithICCRCoder:(id)a0;

@end
