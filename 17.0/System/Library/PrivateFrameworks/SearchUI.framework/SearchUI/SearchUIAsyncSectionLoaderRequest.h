@class NSString;

@interface SearchUIAsyncSectionLoaderRequest : NSObject

@property (retain) NSString *identifier;
@property (copy) id /* block */ computeBlock;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
