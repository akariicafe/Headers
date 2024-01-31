@class NSString;

@interface BLTBBBulletinKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *sectionID;
@property (readonly, copy, nonatomic) NSString *publisherMatchID;

+ (id)bulletinKeyWithSectionID:(id)a0 publisherMatchID:(id)a1;

- (unsigned long long)hash;
- (id)keyString;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSectionID:(id)a0 publisherMatchID:(id)a1;

@end
