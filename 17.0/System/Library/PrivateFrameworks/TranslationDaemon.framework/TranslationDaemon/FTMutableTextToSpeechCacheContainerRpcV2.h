@class NSString, FTTextToSpeechRequest, FTTextToSpeechResponse;

@interface FTMutableTextToSpeechCacheContainerRpcV2 : FTTextToSpeechCacheContainerRpcV2

@property (copy, nonatomic) NSString *original_session_id;
@property (copy, nonatomic) FTTextToSpeechRequest *cached_request;
@property (copy, nonatomic) FTTextToSpeechResponse *cached_response;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
