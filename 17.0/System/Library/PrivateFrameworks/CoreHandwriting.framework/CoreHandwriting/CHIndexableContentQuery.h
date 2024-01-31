@class CHRecognitionSessionIndexableContent;

@interface CHIndexableContentQuery : CHQuery {
    CHRecognitionSessionIndexableContent *_indexableContent;
}

@property (readonly) CHRecognitionSessionIndexableContent *indexableContent;

- (id)debugName;
- (void).cxx_destruct;
- (id)initWithRecognitionSession:(id)a0;
- (void)q_updateQueryResult;

@end
