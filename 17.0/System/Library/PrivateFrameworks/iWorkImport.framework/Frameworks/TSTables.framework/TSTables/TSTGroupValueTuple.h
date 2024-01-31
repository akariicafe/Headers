@class NSArray;

@interface TSTGroupValueTuple : TSKSosBase <NSCopying> {
    NSArray *_groupValues;
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _groupValueUid;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _combinedCanonicalKeyStringAsUtf8;
}

@property (readonly, nonatomic) unsigned char numberOfLevels;

+ (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })groupValueUidForTuple:(id)a0 appendingTuple:(id)a1;

- (unsigned long long)hash;
- (id).cxx_construct;
- (id)locale;
- (id)description;
- (void).cxx_destruct;
- (id)initWithValueArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithValues:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)canonicalKeyStringAtLevel:(unsigned char)a0;
- (const char *)combinedCanonicalKeyStringAsUtf8;
- (id)groupValueAtLevel:(unsigned char)a0;
- (id)groupValueTupleByAppendingTuple:(id)a0;
- (id)groupValueTupleByAppendingValue:(id)a0;
- (id)groupValueTupleByDemotingValueAtLevel:(unsigned char)a0 toLevel:(unsigned char)a1;
- (id)groupValueTupleByMergingTuple:(id)a0 toLevel:(unsigned char)a1;
- (id)groupValueTupleByPromotingValueAtLevel:(unsigned char)a0 toLevel:(unsigned char)a1;
- (id)groupValueTupleByRemovingValueAtLevel:(unsigned char)a0;
- (id)groupValueTupleByReplacingValue:(id)a0 atLevel:(unsigned char)a1;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })groupValueUid;
- (id)initWithTSCEValues:(const void *)a0 locale:(id)a1;
- (id)prefixTupleToLevel:(unsigned char)a0;
- (void)updateWithDocumentRoot:(id)a0;

@end
