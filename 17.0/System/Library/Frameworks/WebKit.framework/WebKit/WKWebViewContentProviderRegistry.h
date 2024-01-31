@interface WKWebViewContentProviderRegistry : NSObject {
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<String>, WTF::HashTraits<Class<WKWebViewContentProvider>>, WTF::HashTableTraits> { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider>>>, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash>::KeyValuePairTraits, WTF::HashTraits<String>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>> { struct HashMap<WebKit::WebPageProxy *, unsigned int, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int>, WTF::HashTableTraits> { struct HashTable<WebKit::WebPageProxy *, WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>>, WTF::DefaultHash<WebKit::WebPageProxy *>, WTF::HashMap<WebKit::WebPageProxy *, unsigned int>::KeyValuePairTraits, WTF::HashTraits<WebKit::WebPageProxy *>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } m_impl; } _pages;
}

- (void)removePage:(void *)a0;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)registerProvider:(Class)a0 forMIMEType:(const void *)a1;
- (struct Vector<WTF::String, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; })_mimeTypesWithCustomContentProviders;
- (void)addPage:(void *)a0;
- (Class)providerForMIMEType:(const void *)a0;

@end
