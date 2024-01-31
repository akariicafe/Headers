@class NSURL, NSArray;

@interface ISURLResolverOperation : ISOperation {
    struct __CFHost { } *_host;
    NSURL *_url;
}

@property (copy, nonatomic) NSURL *URL;
@property (readonly) NSArray *resolvedAddresses;
@property (readonly) NSArray *resolvedAddressStrings;

- (id)initWithURL:(id)a0;
- (void)run;
- (void)dealloc;
- (void)setUrl:(id)a0;
- (void).cxx_destruct;
- (id)url;
- (void)_resolutionCompletedWithError:(id)a0;
- (void)_runLookupForHostname:(id)a0;

@end
