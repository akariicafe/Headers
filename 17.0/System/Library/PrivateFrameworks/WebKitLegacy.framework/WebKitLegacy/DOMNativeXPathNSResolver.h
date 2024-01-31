@class NSString;

@interface DOMNativeXPathNSResolver : DOMObject <DOMXPathNSResolver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)lookupNamespaceURI:(id)a0;

@end
