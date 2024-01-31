@class GEOMapItemIdentifier, GEOPDContainmentPlace;
@protocol GEOServerFormattedString;

@interface GEOEnclosingPlace : NSObject {
    GEOPDContainmentPlace *_enclosingPlace;
}

@property (readonly, nonatomic) GEOMapItemIdentifier *parentIdentifier;
@property (readonly, nonatomic) id<GEOServerFormattedString> containmentTextTemplate;

- (void).cxx_destruct;
- (id)initWithContainmentPlace:(id)a0;

@end
