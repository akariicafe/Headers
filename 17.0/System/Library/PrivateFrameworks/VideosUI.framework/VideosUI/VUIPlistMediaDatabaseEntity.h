@class NSString, NSURL, NSNumber;

@interface VUIPlistMediaDatabaseEntity : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *genreTitle;
@property (copy, nonatomic) NSString *contentDescription;
@property (copy, nonatomic) NSURL *coverArtURL;
@property (copy, nonatomic) NSString *canonicalID;
@property (readonly, copy, nonatomic, getter=isLocal) NSNumber *local;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_mediaEntityPropertyDidChange:(id)a0;

@end
