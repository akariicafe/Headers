@interface HMMutableHomePersonManagerSettings : HMHomePersonManagerSettings

@property (getter=isFaceClassificationEnabled) BOOL faceClassificationEnabled;

- (void)setEnabled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
