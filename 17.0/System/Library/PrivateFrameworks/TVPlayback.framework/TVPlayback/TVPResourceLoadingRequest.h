@class NSDictionary, AVAssetResourceLoadingRequest, NSURL, NSNumber;

@interface TVPResourceLoadingRequest : NSObject

@property (readonly, nonatomic) AVAssetResourceLoadingRequest *loadingRequest;
@property (readonly, copy, nonatomic) NSNumber *avRequestID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL isCancelled;

- (id)init;
- (void).cxx_destruct;
- (void)finishLoadingWithError:(id)a0;
- (void)finishLoadingWithResponse:(id)a0 data:(id)a1 renewalDate:(id)a2 redirect:(id)a3;
- (void)finishLoadingWithResponseData:(id)a0 renewalDate:(id)a1 keyType:(long long)a2;
- (id)initWithAssetResourceLoadingRequest:(id)a0;

@end
