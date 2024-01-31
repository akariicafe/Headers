@class NSString;

@interface SAMPAlbumCollection : SAMPCollection

@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) NSString *sortArtist;

+ (id)albumCollectionWithDictionary:(id)a0 context:(id)a1;
+ (id)albumCollection;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
