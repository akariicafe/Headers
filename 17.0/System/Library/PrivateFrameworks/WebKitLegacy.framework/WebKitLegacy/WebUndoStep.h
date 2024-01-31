@interface WebUndoStep : NSObject {
    struct RefPtr<WebCore::UndoStep, WTF::RawPtrTraits<WebCore::UndoStep>, WTF::DefaultRefDerefTraits<WebCore::UndoStep>> { struct UndoStep *m_ptr; } m_step;
}

+ (void)initialize;
+ (id)stepWithUndoStep:(void *)a0;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void *)step;
- (id)initWithUndoStep:(void *)a0;

@end
