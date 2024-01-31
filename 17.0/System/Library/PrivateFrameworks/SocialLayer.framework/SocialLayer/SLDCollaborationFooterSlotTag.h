@class NSString;

@interface SLDCollaborationFooterSlotTag : SLDSlotTag <NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) double maxWidth;

+ (id)tagForTitle:(id)a0 subtitle:(id)a1 maxWidth:(double)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 maxWidth:(double)a2;

@end
