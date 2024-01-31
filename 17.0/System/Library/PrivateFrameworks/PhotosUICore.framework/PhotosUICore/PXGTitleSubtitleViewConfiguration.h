@class NSString, PXTitleSubtitleLabelSpec;

@interface PXGTitleSubtitleViewConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *spec;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
