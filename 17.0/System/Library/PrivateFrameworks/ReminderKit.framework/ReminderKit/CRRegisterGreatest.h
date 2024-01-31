@interface CRRegisterGreatest : CRRegisterLatest

- (void)setContents:(id)a0;
- (long long)compare:(id)a0 with:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)mergeWithRegisterGreatest:(id)a0;

@end
