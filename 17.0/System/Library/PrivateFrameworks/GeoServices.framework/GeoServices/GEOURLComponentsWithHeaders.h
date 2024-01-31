@class GEOURLWithHeaders, NSMutableDictionary, NSURL, NSURLComponents;

@interface GEOURLComponentsWithHeaders : NSObject

@property (readonly, nonatomic) NSURLComponents *URLComponents;
@property (readonly, nonatomic) NSMutableDictionary *headerFields;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) GEOURLWithHeaders *URLWithHeaders;

- (id)initWithURL:(id)a0;
- (id)init;
- (id)initWithURLComponents:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)updateQueryItemsWithBlock:(id /* block */)a0;

@end
