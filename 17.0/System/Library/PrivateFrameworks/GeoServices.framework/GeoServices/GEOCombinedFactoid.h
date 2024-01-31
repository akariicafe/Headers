@class NSString, GEOMapItemIdentifier, GEOColor;
@protocol GEOFactoid;

@interface GEOCombinedFactoid : NSObject <GEOFactoid> {
    id<GEOFactoid> _labelFactoid;
    id<GEOFactoid> _iconFactoid;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) NSString *unstructuredValue;
@property (readonly, nonatomic) int semantic;
@property (readonly, nonatomic) int unitType;
@property (readonly, nonatomic, getter=shouldUseStructuredData) BOOL useStructuredData;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) GEOMapItemIdentifier *placeIdentifier;
@property (readonly, nonatomic) BOOL canBeDisplayedInPlaceSummary;
@property (readonly, nonatomic) GEOColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLabelFactoid:(id)a0 iconFactoid:(id)a1;

@end
