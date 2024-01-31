@class MRURouteTextFormatterConfiguration;

@interface MRURouteTextFormatter : NSObject

@property (retain, nonatomic) MRURouteTextFormatterConfiguration *configuration;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)textForRoute:(id)a0 textBoundingWidth:(double)a1;
- (id)bestStringForRouteNames:(id)a0 designatedGroupLeaderName:(id)a1 thatFitsWidth:(double)a2;
- (long long)compareLength:(id)a0 with:(id)a1;
- (id)formattedRouteNameForDesignatedGroupLeaderName:(id)a0 truncatedDesignatedGroupLeaderName:(id)a1 routeNamesText:(id)a2;
- (id)marketingNames;
- (id)plusSeparatedRouteNames:(id)a0;
- (id)routeNamesSortedAlphanumeric:(id)a0;
- (id)routeNamesSortedLength:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForText:(id)a0;
- (id)text:(id)a0 displayAsSiriSuggestion:(BOOL)a1;
- (BOOL)text:(id)a0 fitsInWidth:(double)a1;
- (id)textForRoute:(id)a0;
- (id)textForRouteNames:(id)a0;
- (id)textForRouteNames:(id)a0 textBoundingWidth:(double)a1;
- (id)truncateText:(id)a0 by:(long long)a1;

@end
