@class GEOMapItemStorage, NSArray, NSString, NSUUID;

@interface MapsSuggestionsShortcut : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=source, setter=setSource:) long long source;
@property (copy, nonatomic) NSArray *contacts;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSUUID *storageIdentifier;
@property (copy, nonatomic) NSString *customName;
@property (copy, nonatomic) GEOMapItemStorage *geoMapItem;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL isHidden;
@property (copy, nonatomic) NSString *originatingAddressString;
@property (readonly, nonatomic) BOOL isBackedPlaceholder;
@property (readonly, nonatomic) BOOL isSetupPlaceholder;
@property (nonatomic) BOOL derivedFromMeCard;

+ (id)shortcutWithData:(id)a0;

- (void)addContact:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeContact:(id)a0;
- (id)data;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)identifierForStorage;
- (id)initBackedPlaceholderWithType:(long long)a0 identifier:(id)a1 customName:(id)a2;
- (id)initBackedPlaceholderWithType:(long long)a0 identifier:(id)a1 originatingAddress:(id)a2 customName:(id)a3;
- (id)initSetupPlaceholderOfType:(long long)a0;
- (id)initWithFavoriteItem:(id)a0;
- (id)initWithGEOMapItem:(id)a0 customName:(id)a1;
- (id)initWithType:(long long)a0 geoMapItem:(id)a1 customName:(id)a2;
- (id)initWithType:(long long)a0 identifier:(id)a1 geoMapItem:(id)a2 customName:(id)a3;
- (id)initWithType:(long long)a0 identifier:(id)a1 geoMapItem:(id)a2 customName:(id)a3 contacts:(id)a4 isHidden:(BOOL)a5 originatingAddress:(id)a6;
- (BOOL)isEqualToFavoriteItem:(id)a0;
- (BOOL)isEqualToShortcut:(id)a0;

@end
