@class NSString, NSNumber;

@interface MDMBook : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *fullPath;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *persistentID;
@property (retain, nonatomic) NSNumber *iTunesStoreID;
@property (copy, nonatomic) NSString *buyParams;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSNumber *downloadIdentifier;
@property (retain, nonatomic) MDMBook *previousVersion;

- (id)friendlyName;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)manifestDictionary;
- (id)initWithManifestDictionary:(id)a0;
- (void)updateBookAttributesByCopyingFromBook:(id)a0;

@end
