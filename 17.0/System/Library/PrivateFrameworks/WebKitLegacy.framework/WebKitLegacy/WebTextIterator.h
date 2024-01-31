@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (void)dealloc;
- (id)currentRange;
- (id)initWithRange:(id)a0;
- (BOOL)atEnd;
- (void)advance;
- (id)currentText;
- (unsigned long long)currentTextLength;
- (const unsigned short *)currentTextPointer;
- (id)currentNode;

@end
