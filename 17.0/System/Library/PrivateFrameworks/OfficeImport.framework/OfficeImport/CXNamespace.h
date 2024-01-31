@interface CXNamespace : NSObject {
    const char *mUri;
    struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *mDocument;
    struct _xmlNs { struct _xmlNs *x0; int x1; char *x2; char *x3; void *x4; struct _xmlDoc *x5; } *mDocumentNamespace;
}

@property (retain, nonatomic) CXNamespace *fallbackNamespace;

+ (void)clearRegisteredNamespaces;
+ (BOOL)isNamespaceSupported:(const char *)a0;
+ (BOOL)isPrefixSupportedFromNodeContext:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 prefix:(const char *)a1;
+ (BOOL)isPrefixSupportedFromStream:(struct _xmlTextReader { } *)a0 prefix:(const char *)a1;
+ (void)registerNamespace:(id)a0;

- (const char *)uri;
- (id)init;
- (BOOL)containsNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
- (void).cxx_destruct;
- (BOOL)containsAttribute:(struct _xmlAttr { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlAttr *x6; struct _xmlAttr *x7; struct _xmlDoc *x8; struct _xmlNs *x9; int x10; void *x11; } *)a0;
- (const char *)fallbackUri;
- (id)initUnsupportedNsWithUri:(const char *)a0;
- (id)initWithUri:(const char *)a0;
- (id)initWithUri:(const char *)a0 fallbackNamespace:(id)a1;

@end
