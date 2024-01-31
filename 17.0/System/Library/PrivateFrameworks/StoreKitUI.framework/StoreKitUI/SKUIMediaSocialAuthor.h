@class NSString, NSArray, NSDictionary, NSURL;

@interface SKUIMediaSocialAuthor : NSObject <NSCopying>

@property (copy, nonatomic) NSString *authorType;
@property (copy, nonatomic) NSString *dsid;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *permissions;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *storePlatformData;
@property (copy, nonatomic) NSURL *thumbnailImageURL;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAuthorDictionary:(id)a0;

@end
