@class _PASLPDictionaryContext;
@protocol _PASLPReaderProtocol;

@interface _PASLPDictionaryEnumerator : NSEnumerator {
    id<_PASLPReaderProtocol> _reader;
    _PASLPDictionaryContext *_context;
    unsigned long long _ofs;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithLazyPlistReader:(id)a0 context:(id)a1;

@end
