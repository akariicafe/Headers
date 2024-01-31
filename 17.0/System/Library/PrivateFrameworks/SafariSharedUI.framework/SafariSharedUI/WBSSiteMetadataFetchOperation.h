@class WBSSiteMetadataRequest;

@interface WBSSiteMetadataFetchOperation : NSOperation

@property (getter=_status, setter=_setStatus:) long long status;
@property (readonly, nonatomic) WBSSiteMetadataRequest *request;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (BOOL)isExecuting;
- (id)init;
- (void)start;
- (BOOL)isFinished;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;

@end
