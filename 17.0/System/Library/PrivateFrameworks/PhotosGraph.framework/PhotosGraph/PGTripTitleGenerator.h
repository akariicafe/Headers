@interface PGTripTitleGenerator : NSObject

+ (id)titleForFeaturedLocationNodes:(id)a0 momentNodes:(id)a1 locationHelper:(id)a2 error:(id *)a3;
+ (id)titleForTripNodeAsCollection:(id)a0 locationHelper:(id)a1 error:(id *)a2;
+ (id)titleTupleForDayHighlightGroupNode:(id)a0 locationHelper:(id)a1 error:(id *)a2;

- (id)init;

@end
