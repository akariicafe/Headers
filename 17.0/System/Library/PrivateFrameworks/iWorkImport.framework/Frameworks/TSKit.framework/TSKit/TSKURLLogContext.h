@class NSString, NSURL;

@interface TSKURLLogContext : NSObject <TSULogContext> {
    NSURL *_url;
}

@property (readonly) NSString *publicString;
@property (readonly) NSString *privateString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logContextWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end
