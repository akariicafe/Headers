@class NSString, CRNormalizedPolyline, CRNormalizedQuad, NSArray;

@interface CRMutableRecognizedTextRegion : CRRecognizedTextRegion

@property (retain) NSString *text;
@property unsigned long long textRegionType;
@property unsigned long long layoutDirection;
@property double activationProbability;
@property double confidence;
@property (retain) NSString *locale;
@property BOOL isCurved;
@property (retain) CRNormalizedQuad *boundingQuad;
@property (retain) CRNormalizedPolyline *polygon;
@property BOOL whitespaceInjected;
@property (retain) NSArray *subregions;
@property (retain) NSArray *candidates;

- (void)adjustBoundsBasedOnSubregions;

@end
