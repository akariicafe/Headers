@class NSString, NSArray, FTBeginTextToSpeechStreamingResponse, FTStartTextToSpeechStreamingRequest, FTFinalTextToSpeechStreamingResponse;

@interface FTMutableTextToSpeechCacheContainerStreamingV2 : FTTextToSpeechCacheContainerStreamingV2

@property (copy, nonatomic) NSString *original_session_id;
@property (copy, nonatomic) FTStartTextToSpeechStreamingRequest *cached_request;
@property (copy, nonatomic) FTBeginTextToSpeechStreamingResponse *cached_begin_response;
@property (copy, nonatomic) NSArray *cached_partial_response;
@property (copy, nonatomic) FTFinalTextToSpeechStreamingResponse *cached_final_response;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
