@class NSString;

@interface CRTableCellOutputRegion : CROutputRegion <CROutputRegionLayoutContributing>

@property struct _NSRange { unsigned long long location; unsigned long long length; } rowRange;
@property struct _NSRange { unsigned long long location; unsigned long long length; } colRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)type;
- (id)layoutComponents;
- (BOOL)contributesToDocumentHierarchy;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(BOOL)a1 copyCandidates:(BOOL)a2 deepCopy:(BOOL)a3;
- (id)crCodableDataRepresentation;
- (id)initWithBlock:(id)a0 quad:(id)a1 rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 colRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (BOOL)shouldAlwaysAddDelimiter;

@end
