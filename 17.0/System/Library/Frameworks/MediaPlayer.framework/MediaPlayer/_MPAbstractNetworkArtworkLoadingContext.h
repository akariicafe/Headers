@class NSURLSessionDataTask, NSMutableDictionary;

@interface _MPAbstractNetworkArtworkLoadingContext : NSObject

@property (retain, nonatomic) NSURLSessionDataTask *dataTask;
@property (readonly, nonatomic) NSMutableDictionary *catalogIdentifierToCompletionHandlerMap;

- (id)init;
- (void).cxx_destruct;

@end
