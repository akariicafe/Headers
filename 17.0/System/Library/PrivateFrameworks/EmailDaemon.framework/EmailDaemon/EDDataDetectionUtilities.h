@interface EDDataDetectionUtilities : NSObject

+ (id)log;
+ (id)extractOneTimeCode:(id)a0 withSubject:(id)a1;
+ (void)_lexiconEnumerateEntries:(struct _LXLexicon { } *)a0 forString:(id)a1 completionHandler:(id /* block */)a2;
+ (id)detectOneTimeCodeWithDataDetectors:(id)a0;
+ (BOOL)isRealWord:(id)a0;

@end
