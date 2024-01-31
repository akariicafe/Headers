@class NSDictionary, IDSServerBagRawContents;

@interface IDSServerBagLoadedContents : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) IDSServerBagRawContents *rawContents;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 rawContents:(id)a1;

@end
