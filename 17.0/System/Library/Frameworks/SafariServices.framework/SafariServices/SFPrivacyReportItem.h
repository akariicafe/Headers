@interface SFPrivacyReportItem : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id userInfo;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)initWithType:(long long)a0 userInfo:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
