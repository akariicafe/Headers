@class NSString, NSURL, NSArray;

@interface CRKBookmark : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSArray *children;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isFavoritesFolder) BOOL favoritesFolder;
@property (readonly, nonatomic, getter=isReadingListFolder) BOOL readingListFolder;

+ (id)favoritesFolderWithChildren:(id)a0;
+ (id)folderWithName:(id)a0 children:(id)a1;
+ (id)folderWithName:(id)a0 children:(id)a1 identifier:(id)a2;
+ (id)leafBookmarkWithName:(id)a0 URL:(id)a1;
+ (id)readingListFolderWithChildren:(id)a0;

- (id)urlString;
- (unsigned long long)hash;
- (void)setUrlString:(id)a0;
- (void)setName:(id)a0;
- (BOOL)isFolder;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 URL:(id)a1 children:(id)a2 identifier:(id)a3;
- (id)childBookmarks;
- (BOOL)isFolderWithIdentifier:(id)a0;
- (void)setChildBookmarks:(id)a0;

@end
