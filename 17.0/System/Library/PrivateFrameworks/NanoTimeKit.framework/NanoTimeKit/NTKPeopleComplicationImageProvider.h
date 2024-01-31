@class UIImage, NSString;

@interface NTKPeopleComplicationImageProvider : CLKImageProvider

@property double borderWidth;
@property double fontSize;
@property (retain, nonatomic) UIImage *profileImage;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *nameAbbreviation;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
