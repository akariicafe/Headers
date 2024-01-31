@class NSArray, NSAttributedString, CROutputRegion;

@interface VNRecognizedTextBlock : VNRecognizedText {
    CROutputRegion *_crOutputRegion;
    unsigned long long _requestRevision;
}

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, copy, nonatomic) NSArray *baselines;
@property (readonly, nonatomic, getter=getRecognizedLanguages) NSArray *recognizedLanguages;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (float)confidence;
- (void)encodeWithCoder:(id)a0;
- (id)string;
- (void).cxx_destruct;
- (unsigned long long)requestRevision;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)boundingBoxForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)getCROutputRegion;
- (id)initWithRequestRevision:(unsigned long long)a0 crOutputRegion:(id)a1;

@end
