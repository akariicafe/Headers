@interface SoundAnalysis.SNLogMelSpectrogramCustomModelUtils : NSObject

+ (struct SNLogMelParameters { float x0; unsigned int x1; float x2; float x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; int x9; int x10; })defaultLogMelExtractionParameters;
+ (BOOL)overrideLogMelExtractionParameters:(struct SNLogMelParameters { float x0; unsigned int x1; float x2; float x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; int x9; int x10; } *)a0 withContentsOfParameterDictionary:(id)a1 error:(id *)a2;
+ (BOOL)resetLogMelExtractionParameters:(struct SNLogMelParameters { float x0; unsigned int x1; float x2; float x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; int x9; int x10; } *)a0 overrideWithParameterDictionary:(id)a1 error:(id *)a2;
+ (BOOL)validateModelDescription:(id)a0 logMelExtractionParameters:(struct SNLogMelParameters { float x0; unsigned int x1; float x2; float x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; int x9; int x10; })a1 withHandler:(id /* block */)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;

@end
