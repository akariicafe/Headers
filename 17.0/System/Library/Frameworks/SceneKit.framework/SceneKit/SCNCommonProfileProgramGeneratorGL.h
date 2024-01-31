@interface SCNCommonProfileProgramGeneratorGL : SCNCommonProfileProgramGenerator {
    int _profile;
}

- (id)init;
- (id)initWithProfile:(int)a0;
- (int)profile;
- (struct __C3DFXProgram { } *)_newProgramWithHashCode:(struct __C3DProgramHashCode { } *)a0 engineContext:(struct __C3DEngineContext { } *)a1 introspectionDataPtr:(void *)a2;

@end
