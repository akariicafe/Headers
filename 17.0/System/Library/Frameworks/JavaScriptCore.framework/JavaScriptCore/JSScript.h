@interface JSScript : NSObject {
    struct WeakObjCPtr<JSVirtualMachine> { id m_weakReference; } m_virtualMachine;
    long long m_type;
    struct MappedFileData { void *m_fileData; unsigned int m_fileSize; } m_mappedSource;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } m_source;
    struct RetainPtr<NSURL> { void *m_ptr; } m_sourceURL;
    struct RetainPtr<NSURL> { void *m_ptr; } m_cachePath;
    struct RefPtr<JSC::CachedBytecode, WTF::RawPtrTraits<JSC::CachedBytecode>, WTF::DefaultRefDerefTraits<JSC::CachedBytecode>> { struct CachedBytecode *m_ptr; } m_cachedBytecode;
}

+ (id)scriptOfType:(long long)a0 withSource:(id)a1 andSourceURL:(id)a2 andBytecodeCache:(id)a3 inVirtualMachine:(id)a4 error:(out id *)a5;
+ (id)scriptOfType:(long long)a0 memoryMappedFromASCIIFile:(id)a1 withSourceURL:(id)a2 andBytecodeCache:(id)a3 inVirtualMachine:(id)a4 error:(out id *)a5;

- (id)init;
- (unsigned int)hash;
- (id)sourceURL;
- (void *)jsSourceCode;
- (id).cxx_construct;
- (BOOL)cacheBytecodeWithError:(id *)a0;
- (struct SourceCode { struct RefPtr<JSC::SourceProvider, WTF::RawPtrTraits<JSC::SourceProvider>, WTF::DefaultRefDerefTraits<JSC::SourceProvider>> { struct SourceProvider *x0; } x0; int x1; int x2; struct OrdinalNumber { int x0; } x3; struct OrdinalNumber { int x0; } x4; })sourceCode;
- (void).cxx_destruct;
- (struct RefPtr<JSC::CachedBytecode, WTF::RawPtrTraits<JSC::CachedBytecode>, WTF::DefaultRefDerefTraits<JSC::CachedBytecode>> { struct CachedBytecode *x0; })cachedBytecode;
- (const void *)source;
- (void)readCache;
- (BOOL)writeCache:(void *)a0;
- (long long)type;
- (BOOL)isUsingBytecodeCache;

@end
