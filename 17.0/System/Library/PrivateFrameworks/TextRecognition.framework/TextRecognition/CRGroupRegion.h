@class NSArray, NSString, CRNormalizedQuad;

@interface CRGroupRegion : NSObject <CRDirectionalRegion, CRGrouping>

@property (retain) NSArray *subregions;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBoundingQuad:(id)a0 layoutDirection:(unsigned long long)a1 subregions:(id)a2;

@end
