@class NSString, NSArray, FLTSSUMetadata;

@interface FLTMutableSSUFile : FLTSSUFile

@property (nonatomic) unsigned short format_version;
@property (copy, nonatomic) FLTSSUMetadata *metadata;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSArray *categories;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
