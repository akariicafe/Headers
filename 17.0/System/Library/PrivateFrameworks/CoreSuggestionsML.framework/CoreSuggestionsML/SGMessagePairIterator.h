@class NSArray, NSString, NSMutableDictionary, NSDate;

@interface SGMessagePairIterator : NSObject {
    NSArray *_messageEvents;
    unsigned long long _messageEventCount;
    unsigned long long _messageEventIndex;
    double _maxReplyGap;
    unsigned long long _maxReplyLength;
    BOOL _done;
    NSString *_attachmentCharacterString;
    NSString *_breadcrumbCharacterString;
    NSMutableDictionary *_latestPromptForHandle;
}

@property (readonly, nonatomic) NSDate *latestProcessedDate;

- (void).cxx_destruct;
- (BOOL)isDoneIterating;
- (id)nextMessagePair;
- (id)handleFromConversationId:(id)a0;
- (id)initWithStartDate:(id)a0 maxBatchSize:(unsigned long long)a1 maxReplyLength:(unsigned long long)a2 maxReplyGap:(double)a3;
- (id)removeBreadcrumbsFromMessage:(id)a0;

@end
