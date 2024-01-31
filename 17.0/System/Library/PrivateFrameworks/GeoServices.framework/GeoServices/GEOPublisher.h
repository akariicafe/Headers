@class NSString, GEOPDPublisher, GEOMapItemIdentifier, NSURL;
@protocol GEOCollectionPublisherAttribution;

@interface GEOPublisher : NSObject {
    GEOPDPublisher *_publisher;
    NSString *_publisherAttributionIdentifierString;
}

@property (readonly, nonatomic) long long totalCollectionCount;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) NSString *publisherDescription;
@property (readonly, nonatomic) NSURL *publisherURL;
@property (readonly, nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, nonatomic) id<GEOCollectionPublisherAttribution> publisherAttribution;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPublisher:(id)a0 usingAttribution:(id)a1;

@end
