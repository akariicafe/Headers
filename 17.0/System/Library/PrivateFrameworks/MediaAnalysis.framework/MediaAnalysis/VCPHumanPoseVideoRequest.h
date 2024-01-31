@class NSArray, VCPImageHumanPoseAnalyzer, NSMutableArray;

@interface VCPHumanPoseVideoRequest : VCPRequest {
    int _personID;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
    VCPImageHumanPoseAnalyzer *_analyzer;
    NSArray *_existingPersons;
    NSMutableArray *_existingPersonsArray;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (struct CGSize { double x0; double x1; })preferredInputSizeWithOptions:(id)a0 error:(id *)a1;
- (unsigned int)preferredPixelFormat;
- (int)associatePersons:(id)a0 withExisingPersons:(id)a1;
- (float)bodyDistance:(id)a0 withBodyB:(id)a1;
- (BOOL)cleanupWithOptions:(id)a0 error:(id *)a1;
- (void)computeActionScoreForPerson:(id)a0;
- (void)computeVarWithID:(id)a0 index1:(int)a1 index2:(int)a2 interVar:(float *)a3 intraVar:(float *)a4;
- (float)normDistance:(struct CGPoint { double x0; double x1; })a0 point2:(struct CGPoint { double x0; double x1; })a1;
- (id)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 withOptions:(id)a1 error:(id *)a2;

@end
