@class NSArray, NSString;

@interface CNAutocompleteQueryCacheMissLogger : NSObject <CNAutocompleteQueryCacheMissLogging>

@property (copy) NSArray *loggers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didReturnCacheFalseNegatives:(id)a0;
- (void)didReturnCacheFalsePositives:(id)a0;
- (id)initWithLoggers:(id)a0;

@end
