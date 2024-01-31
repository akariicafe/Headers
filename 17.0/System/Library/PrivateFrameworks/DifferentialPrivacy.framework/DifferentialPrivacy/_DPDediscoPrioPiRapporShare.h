@interface _DPDediscoPrioPiRapporShare : NSObject {
    void /* unknown type, empty encoding */ prioShare;
    void /* unknown type, empty encoding */ numberOfEncodedIndices;
    void /* unknown type, empty encoding */ piRapporOtherPhi;
}

- (id)initWithSerializedData:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)getNumberOfEncodedIndices;
- (id)getPiRapporOtherPhi;
- (id)getPrioShare;
- (id)initWithPrioShare:(id)a0 numberOfEncodedIndices:(unsigned long long)a1 piRapporOtherPhi:(id)a2;
- (id)serializeAndReturnError:(id *)a0;

@end
