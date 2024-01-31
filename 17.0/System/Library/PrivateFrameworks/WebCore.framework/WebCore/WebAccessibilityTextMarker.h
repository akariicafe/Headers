@interface WebAccessibilityTextMarker : NSObject {
    void *_cache;
    struct TextMarkerData { unsigned int treeID; unsigned int objectID; struct Node *node; unsigned int offset; int anchorType; BOOL affinity; unsigned int characterStart; unsigned int characterOffset; BOOL ignored; } _textMarkerData;
}

+ (id)startOrEndTextMarkerForRange:(const void *)a0 isStart:(BOOL)a1 cache:(void *)a2;
+ (id)textMarkerWithCharacterOffset:(struct CharacterOffset { struct Node *x0; int x1; int x2; int x3; } *)a0 cache:(void *)a1;
+ (id)textMarkerWithVisiblePosition:(void *)a0 cache:(void *)a1;

- (BOOL)isIgnored;
- (id)dataRepresentation;
- (id).cxx_construct;
- (id)description;
- (id)initWithData:(id)a0 cache:(void *)a1;
- (struct CharacterOffset { struct Node *x0; int x1; int x2; int x3; })characterOffset;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node *x0; } x0; unsigned int x1; unsigned char x2 : 3; unsigned char x3 : 1; } x0; BOOL x1; })visiblePosition;
- (void *)accessibilityObject;
- (id)initWithData:(id)a0 accessibilityObject:(id)a1;
- (id)initWithTextMarker:(struct TextMarkerData { unsigned int x0; unsigned int x1; struct Node *x2; unsigned int x3; int x4; BOOL x5; unsigned int x6; unsigned int x7; BOOL x8; } *)a0 cache:(void *)a1;
- (struct TextMarkerData { unsigned int x0; unsigned int x1; struct Node *x2; unsigned int x3; int x4; BOOL x5; unsigned int x6; unsigned int x7; BOOL x8; })textMarkerData;

@end
