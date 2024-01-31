@class SSVPlaybackLeaseResponse, NSError;

@interface SSVPlaybackLeaseCallback : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) SSVPlaybackLeaseResponse *response;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
