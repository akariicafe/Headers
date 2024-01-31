@interface PKProductSectionSearchResult : NSObject {
    double _normalizedSearchDistance;
}

@property (nonatomic) unsigned long long numberOfResults;
@property (nonatomic) double searchDistance;
@property (readonly, nonatomic) double normalizedSearchDistance;

@end
