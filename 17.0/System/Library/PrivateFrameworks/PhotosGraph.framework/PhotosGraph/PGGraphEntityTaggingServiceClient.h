@class NSString, NSDictionary, NSError;

@interface PGGraphEntityTaggingServiceClient : NSObject {
    void /* unknown type, empty encoding */ etService;
    void /* unknown type, empty encoding */ personView;
    void /* unknown type, empty encoding */ log;
    void /* unknown type, empty encoding */ entityTagsToIngest;
}

- (id)init;
- (void).cxx_destruct;
- (void)entityTagsForPersonWithPersonLocalIdentifier:(NSString *)a0 completionHandler:(void (^)(NSDictionary *, NSError *))a1;
- (id)initWithSupportedTagsAsStrings:(id)a0 log:(id)a1 error:(id *)a2;

@end
