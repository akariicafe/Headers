@class NSMutableDictionary, NSDictionary, NSArray, NSMutableSet, NSString;

@interface OSASubmissionPolicy : NSObject {
    NSArray *_default_template;
    NSArray *_primary_template;
    NSMutableSet *_allowOptOutByRouting;
    NSArray *_specific_files;
    NSString *_identifier;
    NSDictionary *_prefaces;
    NSMutableDictionary *_results;
}

@property BOOL ignoreProxies;
@property (readonly) BOOL hasTasking;
@property (readonly) NSDictionary *latestResults;
@property (readonly) NSMutableDictionary *scanOptions;

- (id)initWithTemplate:(id)a0 options:(id)a1;
- (id)init;
- (id)buildSubmissionTemplateForConfig:(id)a0;
- (void)registerRouting:(id)a0 result:(BOOL)a1;
- (id)_loadPreviousResults;
- (void).cxx_destruct;
- (id)shouldSubmitRouting:(id)a0;
- (void)persist;

@end
