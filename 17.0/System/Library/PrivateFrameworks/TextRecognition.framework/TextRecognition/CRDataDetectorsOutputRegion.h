@class DDScannerResult;

@interface CRDataDetectorsOutputRegion : CROutputRegion {
    unsigned long long _dataType;
    DDScannerResult *_ddResult;
}

@property (readonly) unsigned long long dataType;
@property (readonly) DDScannerResult *ddResult;

+ (id)outputRegionWithDDResult:(id)a0 children:(id)a1 locale:(id)a2;
+ (id)outputRegionWithDataType:(unsigned long long)a0 ddResult:(id)a1 children:(id)a2 locale:(id)a3;

- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)type;
- (BOOL)computesBoundsFromChildren;
- (BOOL)computesTranscriptFromChildren;
- (BOOL)contributesToDocumentHierarchy;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2 deepCopy:(BOOL)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;

@end
