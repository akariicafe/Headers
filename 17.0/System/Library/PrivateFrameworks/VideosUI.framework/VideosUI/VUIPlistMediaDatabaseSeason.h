@class NSNumber, NSArray, VUIPlistMediaDatabaseShow;

@interface VUIPlistMediaDatabaseSeason : VUIPlistMediaDatabaseEntity <NSCopying>

@property (weak, nonatomic) VUIPlistMediaDatabaseShow *show;
@property (copy, nonatomic) NSNumber *seasonNumber;
@property (copy, nonatomic) NSArray *episodes;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)isLocal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)episodeForIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0 show:(id)a1;
- (id)initWithIdentifier:(id)a0 show:(id)a1;

@end
