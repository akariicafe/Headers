@class NSString, CROutputRegion;

@interface CROutputRegionTranscriptComponent : NSObject <CRCodable, NSCopying>

@property (readonly) CROutputRegion *outputRegion;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } representedRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)crCodableDataRepresentation;
- (id)initWithOutputRegion:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
