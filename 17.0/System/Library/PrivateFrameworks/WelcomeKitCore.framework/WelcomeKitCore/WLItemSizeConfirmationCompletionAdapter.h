@interface WLItemSizeConfirmationCompletionAdapter : NSObject

@property (readonly, nonatomic) id /* block */ segmentCompletion;
@property (readonly, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithUnconfirmedItemSize:(unsigned long long)a0 segmentSize:(unsigned long long)a1 originalSegmentCompletion:(id /* block */)a2 originalCompletion:(id /* block */)a3;

@end
