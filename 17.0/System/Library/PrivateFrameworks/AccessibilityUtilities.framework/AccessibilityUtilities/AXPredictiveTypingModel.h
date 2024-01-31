@interface AXPredictiveTypingModel : NSObject {
    void *_wordModel;
}

- (id)init;
- (void)dealloc;
- (id)_completionPredictionsForPrefix:(id)a0 entireText:(id)a1 desiredNumber:(unsigned long long)a2;
- (id)_lastPartialWordForText:(id)a0 orEndOfSentence:(BOOL *)a1;
- (unsigned int *)_newContextForText:(id)a0 includeLastToken:(BOOL)a1 length:(long long *)a2;
- (id)_nextWordPredictionsForText:(id)a0 desiredNumber:(unsigned long long)a1;
- (void)enumerateTokensForText:(id)a0 usingBlock:(id /* block */)a1;
- (id)predictionsForText:(id)a0;
- (id)predictionsForText:(id)a0 desiredNumber:(unsigned long long)a1;

@end
