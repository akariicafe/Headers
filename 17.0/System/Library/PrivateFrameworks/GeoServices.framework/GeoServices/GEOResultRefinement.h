@class GEOResultRefinementMultiSelect, GEOResultRefinementToggle, GEOResultRefinementSort;

@interface GEOResultRefinement : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) GEOResultRefinementToggle *toggle;
@property (retain, nonatomic) GEOResultRefinementMultiSelect *multiSelect;
@property (retain, nonatomic) GEOResultRefinementSort *sort;

- (void).cxx_destruct;
- (id)initWithToggle:(id)a0;
- (id)convertToGEOPDResultRefinement;
- (id)initWithMultiSelect:(id)a0;
- (id)initWithResultRefinement:(id)a0;
- (id)initWithSort:(id)a0;

@end
