@class NSArray, NSString, GEOPDGuidesHomeFixedSection;

@interface GEOGuidesHomeFixedSection : NSObject {
    GEOPDGuidesHomeFixedSection *_pdFixedSection;
    NSArray *_mapsResults;
}

@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) NSArray *featuredGuides;
@property (readonly, nonatomic) NSArray *filters;
@property (readonly, nonatomic) NSArray *filteredGuides;
@property (readonly, nonatomic) NSArray *filteredGuideIds;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)guideResultsFromMapResults;
- (id)initWithGuidesHomeFixedSection:(id)a0 mapsResults:(id)a1;

@end
