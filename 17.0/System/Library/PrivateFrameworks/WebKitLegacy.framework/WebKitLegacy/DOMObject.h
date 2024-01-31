@class DOMStyleSheet;

@interface DOMObject : WebScriptObject <NSCopying> {
    struct DOMObjectInternal { } *_internal;
}

@property (readonly) DOMStyleSheet *sheet;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
