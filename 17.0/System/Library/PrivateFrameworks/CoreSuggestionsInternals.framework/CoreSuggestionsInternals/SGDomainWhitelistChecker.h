@interface SGDomainWhitelistChecker : NSObject

+ (id)lock;
+ (BOOL)isStructuredEventCandidateForURL:(id)a0 title:(id)a1;
+ (void)_setTrieFromPath:(id)a0 guardedData:(id)a1;
+ (BOOL)isStructuredEventCandidateForEmailDomain:(id)a0;
+ (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned int x5 : 27; })payloadForDomain:(id)a0;
+ (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned int x5 : 27; })payloadWithStartChar:(const char *)a0 andSize:(unsigned long long)a1;
+ (void)setTrieFromPath:(id)a0;

@end
