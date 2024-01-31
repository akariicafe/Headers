@class MFError, MFConditionLock;
@protocol MFDAStreamingContentConsumer;

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer> {
    MFConditionLock *_doneCondition;
}

@property (retain, nonatomic) MFError *error;
@property (retain, nonatomic) id<MFDAStreamingContentConsumer> streamConsumer;

- (id)init;
- (void)waitUntilDone;
- (void).cxx_destruct;
- (void)actionFailed:(long long)a0 forTask:(id)a1 error:(id)a2;
- (void)consumeData:(char *)a0 length:(int)a1 format:(int)a2 mailMessage:(id)a3;
- (void)didEndStreamingForMailMessage:(id)a0;
- (void)searchResultFetchedWithResponses:(id)a0;
- (BOOL)shouldBeginStreamingForMailMessage:(id)a0 format:(int)a1;
- (BOOL)waitUntilDoneBeforeDate:(id)a0;

@end
