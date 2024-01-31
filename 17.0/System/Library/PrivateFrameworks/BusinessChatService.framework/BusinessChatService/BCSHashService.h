@interface BCSHashService : NSObject

+ (long long)SHA256TruncatedHashForInputString:(id)a0 includedBytes:(unsigned long long)a1;
+ (id)SHA256HashForInputString:(id)a0;
+ (BOOL)isValidFullHash:(id)a0;
+ (long long)truncatedHashForFullHash:(id)a0 includedBytes:(unsigned long long)a1;

@end
