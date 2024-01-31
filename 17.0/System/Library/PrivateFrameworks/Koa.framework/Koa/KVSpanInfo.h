@class NSString, NSData;

@interface KVSpanInfo : NSObject <NSCopying> {
    NSString *_value;
    NSData *_buffer;
    const struct SpanInfo { unsigned char x0[1]; } *_spanInfo;
}

+ (id)spanInfoFromEncodedString:(id)a0 error:(id *)a1;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)encodedString;
- (unsigned int)editDistance;
- (id)getAliasTypesArray;
- (BOOL)isAliasMatch;
- (BOOL)isApproximateMatch;
- (BOOL)isPartialMatch;
- (float)matchScore;
- (unsigned int)matchedAliasCount;
- (unsigned int)matchedStopWordCount;
- (unsigned int)matchedTokenCount;
- (unsigned int)maxAliasCount;
- (unsigned int)maxStopWordCount;
- (unsigned int)maxTokenCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })spanRange;
- (unsigned short)aliasMatchOptions;
- (id)initWithBuffer:(id)a0 verify:(BOOL)a1 value:(id)a2 error:(id *)a3;
- (id)initWithValue:(id)a0 location:(unsigned int)a1 length:(unsigned int)a2 matchScore:(float)a3 maxTokenCount:(unsigned int)a4 matchedTokenCount:(unsigned int)a5 maxStopWordCount:(unsigned int)a6 matchedStopWordCount:(unsigned int)a7 maxAliasCount:(unsigned int)a8 matchedAliasCount:(unsigned int)a9 editDistance:(unsigned int)a10 aliasMatchOptions:(unsigned short)a11;
- (BOOL)isEqualToSpanInfo:(id)a0;

@end
