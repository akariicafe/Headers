@class POXMLXPathResult;

@interface POXMLNode : NSObject

@property (nonatomic) struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *node;
@property (retain, nonatomic) POXMLXPathResult *xpathResultSet;

- (id)init;
- (id)content;
- (id)parent;
- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (id)evaluateXPath:(id)a0;
- (id)rawXMLString;

@end
