@interface SentencePieceWrapper : NSObject {
    void *sp;
}

- (BOOL)load:(id)a0;
- (id)init;
- (id)decode:(id)a0;
- (id)encode:(id)a0;
- (id)encodingAndUTF8Spans:(const char *)a0;

@end
