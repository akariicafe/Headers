@class NSArray, NSString;

@interface VCPFlowDecoder : VCPEspressoModel {
    NSArray *_inputBlobNames;
    NSString *_outpuBlobName;
}

- (void).cxx_destruct;
- (int)bindWithBuffers:(struct __CVBuffer { } *)a0 correlation:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 outputFlow:(struct __CVBuffer { } *)a3;
- (int)estimateFlow:(struct __CVBuffer { } *)a0 correlation:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 outputFlow:(struct __CVBuffer { } *)a3 callback:(id /* block */)a4;
- (id)initModule:(int)a0 config:(id)a1 cancel:(id /* block */)a2;

@end
