@interface BSCFBundle : NSObject {
    struct __CFBundle { } *_cfBundle;
}

- (id)initWithPath:(id)a0;
- (id)initWithURL:(id)a0;
- (id)infoDictionary;
- (void)dealloc;
- (id)localizedInfoDictionary;
- (id)bundlePath;
- (id)executablePath;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)pathForResource:(id)a0 ofType:(id)a1;
- (id)description;
- (id)bundleIdentifier;
- (id)pathForResource:(id)a0 ofType:(id)a1 inDirectory:(id)a2;
- (struct __CFBundle { } *)cfBundle;

@end
