@class NSString, NSDictionary;

@interface PKRemoteThumbnailKey : NSObject <NSCopying>

@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSDictionary *requestDictionary;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRemoteThumbnailKey:(id)a0;

@end
