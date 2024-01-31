@class NSData, VCPCNNModelEspresso, NSArray;

@interface VCPVideoCNNBackbone : NSObject {
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_outputNames;
}

@property (readonly) float *outputBeforeFc;
@property (readonly) float *outputBeforeFcSettling;
@property (readonly) float *outputBeforeSpatiialPooling;
@property (readonly) float *outputRes4;
@property (readonly) float *outputBeforeTemporalPooling;
@property (readonly) NSData *embedding;

+ (id)sharedModel:(id)a0 outputNames:(id)a1 properties:(id)a2;

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (int)inference:(float *)a0 settling:(BOOL)a1;

@end
