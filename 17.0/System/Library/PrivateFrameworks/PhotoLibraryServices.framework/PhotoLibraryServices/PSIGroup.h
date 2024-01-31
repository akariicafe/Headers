@class NSMutableString;

@interface PSIGroup : PSIReusableObject {
    unsigned long long _compressedRanges[2];
    struct _NSRange { unsigned long long location; unsigned long long length; } _tokenRanges[8];
    unsigned long long _tokenRangesCount;
}

@property (nonatomic) unsigned long long groupId;
@property (nonatomic) unsigned long long owningGroupId;
@property (nonatomic) short category;
@property (readonly, nonatomic) NSMutableString *contentString;
@property (readonly, nonatomic) NSMutableString *normalizedString;
@property (readonly, nonatomic) NSMutableString *lookupIdentifier;
@property (retain, nonatomic) struct __CFArray { } *assetIds;
@property (retain, nonatomic) struct __CFArray { } *collectionIds;
@property (nonatomic) unsigned long long matchTypeForQuery;
@property (readonly, retain, nonatomic) struct __CFArray { } *intersectedAssetIds;
@property (readonly, retain, nonatomic) struct __CFArray { } *intersectedCollectionIds;

+ (void)_getTokenRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; }[8])a0 fromCompressedRanges:(unsigned long long[2])a1;
+ (void)getCompressedRanges:(unsigned long long[2])a0 fromTokenRanges:(struct { long long x0; long long x1; } *)a1 count:(long long)a2;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (void)prepareForReuse;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_updateWithIntersectedAssetIds:(struct __CFArray { } *)a0;
- (long long)compareToGroup:(id)a0;
- (int)_assetIdsCount;
- (int)_collectionIdsCount;
- (void)_resetTokenRangesForContentString;
- (id)_tokenRangesDescription;
- (void)_updateWithIntersectedCollectionIds:(struct __CFArray { } *)a0;
- (unsigned long long)groupIdForObjectLookup;
- (id)initWithContentString:(id)a0 normalizedString:(id)a1 lookupIdentifier:(id)a2 category:(short)a3 groupId:(unsigned long long)a4 owningGroupId:(long long)a5;
- (BOOL)isExactMatchForQuery;
- (void)prepareFromFilenameStatement:(struct sqlite3_stmt { } *)a0;
- (void)prepareFromStatement:(struct sqlite3_stmt { } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenRangesCount;
- (void)unionCollectionIdsWithGroup:(id)a0;
- (void)unionIdsWithGroup:(id)a0;
- (void)updateWithIntersectedIds:(struct __CFArray { } *)a0 searchResultType:(unsigned long long)a1;

@end
