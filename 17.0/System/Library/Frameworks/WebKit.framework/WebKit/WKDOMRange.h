@class NSString, WKDOMNode, NSArray;

@interface WKDOMRange : NSObject {
    struct RefPtr<WebCore::Range, WTF::RawPtrTraits<WebCore::Range>, WTF::DefaultRefDerefTraits<WebCore::Range>> { struct Range *m_ptr; } _impl;
}

@property (readonly, retain) WKDOMNode *startContainer;
@property (readonly) long long startOffset;
@property (readonly, retain) WKDOMNode *endContainer;
@property (readonly) long long endOffset;
@property (readonly, copy) NSString *text;
@property (readonly) BOOL isCollapsed;
@property (readonly) NSArray *textRects;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithImpl:(void *)a0;
- (id)initWithDocument:(id)a0;
- (void)selectNodeContents:(id)a0;
- (void)setEnd:(id)a0 offset:(int)a1;
- (void)setStart:(id)a0 offset:(int)a1;
- (void)collapse:(BOOL)a0;
- (struct OpaqueWKBundleRangeHandle { } *)_copyBundleRangeHandleRef;
- (id)rangeByExpandingToWordBoundaryByCharacters:(unsigned long long)a0 inDirection:(long long)a1;
- (void)selectNode:(id)a0;

@end
