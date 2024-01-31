@class KSXMLWriter;

@interface KSXMLElementContentsProxy : NSProxy {
    id _target;
    KSXMLWriter *_XMLWriter;
    unsigned long long _elementsCount;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)ks_prepareWithTarget:(id)a0 XMLWriter:(id)a1;

@end
