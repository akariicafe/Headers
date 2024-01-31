@interface BBBulletinRemoveUpdate : BBBulletinUpdate

@property (readonly, nonatomic) BOOL shouldSync;

+ (BOOL)supportsSecureCoding;
+ (id)updateWithBulletin:(id)a0 feeds:(unsigned long long)a1 shouldSync:(BOOL)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBulletin:(id)a0 feeds:(unsigned long long)a1 shouldSync:(BOOL)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)typeDescription;
- (id)initWithCoder:(id)a0;

@end
