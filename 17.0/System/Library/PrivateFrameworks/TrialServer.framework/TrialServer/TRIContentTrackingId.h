@class NSString;

@interface TRIContentTrackingId : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *str;

+ (id)contentIdWithStr:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToContentId:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementStr:(id)a0;
- (id)initWithStr:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
