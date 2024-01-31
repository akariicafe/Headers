@class NSArray, NSString;

@interface EspressoProfilingLayerSupportInfo : NSObject

@property (retain) NSArray *error_public;
@property (retain) NSArray *error_private;
@property BOOL supported;
@property BOOL exists;
@property BOOL has_perf_warning;
@property BOOL internal_layer;
@property (retain) NSString *type;

- (void).cxx_destruct;

@end
