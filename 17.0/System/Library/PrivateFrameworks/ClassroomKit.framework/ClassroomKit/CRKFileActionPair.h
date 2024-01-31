@class NSURL;

@interface CRKFileActionPair : NSObject

@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSURL *destinationURL;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1;

@end
