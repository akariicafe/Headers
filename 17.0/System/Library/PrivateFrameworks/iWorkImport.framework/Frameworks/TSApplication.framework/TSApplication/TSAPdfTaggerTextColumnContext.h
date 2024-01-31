@class TSWPSelection, TSWPStorage, TSWPColumn, TSAPdfTaggerTextColumnOwnerContext, NSObject;
@protocol TSWPStyleProvider;

@interface TSAPdfTaggerTextColumnContext : TSAPdfTaggerContext {
    struct TSWPParagraphEnumerator { TSWPStorage *_storage; NSObject<TSWPStyleProvider> *_styleProvider; unsigned long long _parIndex; unsigned long long _endParIndex; unsigned long long _firstParIndex; unsigned long long _lastParIndex; BOOL _requireHidden; struct _NSRange { unsigned long long location; unsigned long long length; } _currentTextRange; } _paragraphEnumerator;
}

@property (readonly, weak, nonatomic) TSAPdfTaggerTextColumnOwnerContext *textColumnOwner;
@property (readonly, weak, nonatomic) TSWPColumn *column;
@property (readonly, weak, nonatomic) TSWPSelection *limitSelection;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithStateOfTagger:(id)a0 column:(id)a1 limitSelection:(id)a2;
- (struct TSWPParagraphEnumerator { id x0; id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; BOOL x6; struct _NSRange { unsigned long long x0; unsigned long long x1; } x7; } *)paragraphEnumerator;

@end
