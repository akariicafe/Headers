@class NSData, UIImage, NSString;

@interface CNUILikenessSystemImageBadge : NSObject <CNUILikenessBadge>

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long badgeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSystemImageNamed:(id)a0;

@end
