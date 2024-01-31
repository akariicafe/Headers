@class GEOMapItemChildActionSearch, GEOGuideLocation;

@interface GEOMapItemChildAction : NSObject

@property (nonatomic) long long childActionType;
@property (retain, nonatomic) GEOMapItemChildActionSearch *childActionSearch;
@property (readonly, nonatomic) GEOGuideLocation *guideLocation;

- (void).cxx_destruct;
- (id)childActionTypeAsString:(long long)a0;
- (id)initWithChildAction:(id)a0;

@end
