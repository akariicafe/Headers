@class NSString;

@interface XMLWrapperNamespace : NSObject {
    struct _xmlNs { struct _xmlNs *x0; int x1; char *x2; char *x3; void *x4; struct _xmlDoc *x5; } *_xmlNs;
}

@property (retain, nonatomic) NSString *href;
@property (retain, nonatomic) NSString *prefix;

- (void).cxx_destruct;
- (id)initWithNsNode:(struct _xmlNs { struct _xmlNs *x0; int x1; char *x2; char *x3; void *x4; struct _xmlDoc *x5; } *)a0 error:(id *)a1;
- (struct _xmlNs { struct _xmlNs *x0; int x1; char *x2; char *x3; void *x4; struct _xmlDoc *x5; } *)xmlNsForNode:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 error:(id *)a1;

@end
