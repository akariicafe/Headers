@class NSArray;

@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <NSCopying>

@property (retain, nonatomic) NSArray *seasons;

- (id)initWithIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)isLocal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)seasonForIdentifier:(id)a0;

@end
