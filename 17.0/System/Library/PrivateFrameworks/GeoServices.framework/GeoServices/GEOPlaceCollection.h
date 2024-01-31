@class NSDate, NSString, NSArray, GEOMapItemIdentifier, NSURL, GEOPDPlaceCollection, GEOPlaceCollectionPullQuote, GEOPublisher;
@protocol GEOCollectionPublisherAttribution, GEOMapItemPhoto;

@interface GEOPlaceCollection : NSObject {
    GEOPDPlaceCollection *_collection;
}

@property (readonly, nonatomic) NSString *collectionTitle;
@property (readonly, nonatomic) NSString *collectionLongTitle;
@property (readonly, nonatomic) NSString *collectionDescription;
@property (readonly, nonatomic) NSString *collectionHTMLDescription;
@property (readonly, nonatomic) GEOMapItemIdentifier *collectionIdentifier;
@property (readonly, nonatomic) NSArray *photos;
@property (readonly, nonatomic) NSArray *itemIds;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSString *authorName;
@property (readonly, nonatomic) id<GEOMapItemPhoto> authorPhoto;
@property (readonly, nonatomic) NSURL *collectionURL;
@property (readonly, nonatomic) NSURL *publisherCollectionURL;
@property (readonly, nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic) GEOPublisher *publisher;
@property (readonly, nonatomic) id<GEOCollectionPublisherAttribution> publisherAttribution;
@property (readonly, nonatomic) NSString *publisherAttributionIdentifierString;
@property (readonly, nonatomic) GEOPlaceCollectionPullQuote *publisherBlockQuote;
@property (readonly, nonatomic) NSArray *mediaLinks;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCollection:(id)a0 usingAttribution:(id)a1;

@end
