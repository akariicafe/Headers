@class GEOMapItemChildPlace, GEOMapItemChildAction, GEOPublisherResult;

@interface GEOMapItemChildItem : NSObject

@property (nonatomic) long long childItemType;
@property (retain, nonatomic) GEOMapItemChildPlace *childItemPlace;
@property (retain, nonatomic) GEOMapItemChildAction *childItemAction;
@property (readonly, nonatomic) GEOPublisherResult *publisherResult;

- (void).cxx_destruct;
- (id)initWithChildItem:(id)a0;
- (id)initWithChildPlace:(id)a0;
- (id)initWithPublisherResult:(id)a0;

@end
