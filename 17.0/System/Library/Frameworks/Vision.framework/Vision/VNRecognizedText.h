@class NSString, CRImageReaderOutput;

@interface VNRecognizedText : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long requestRevision;
@property (readonly, copy) CRImageReaderOutput *crOutput;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) float confidence;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)boundingBoxForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)initWithRequestRevision:(unsigned long long)a0 CRImageReaderOutput:(id)a1;

@end
