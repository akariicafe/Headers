@class NSArray, NSString, CROutputRegion;

@interface VNRecognizedTextBlockObservation : VNRecognizedTextObservation <VNDataDetectorSupporting> {
    CROutputRegion *_crOutputRegion;
}

@property (readonly, nonatomic, getter=getChildren) NSArray *children;
@property (readonly, nonatomic, getter=getTranscript) NSString *transcript;
@property (readonly, nonatomic, getter=getLines) NSArray *lines;
@property (readonly, nonatomic) BOOL shouldBeWrappedWithNextLine;
@property (readonly, nonatomic, getter=getRecognizedLanguages) NSArray *recognizedLanguages;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)topCandidates:(unsigned long long)a0;
- (id)boundingBoxForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)getCROutputRegion;
- (id)getDataDetectorResults:(id *)a0;
- (id)initWithRequestRevision:(unsigned long long)a0 crOutputRegion:(id)a1;

@end
