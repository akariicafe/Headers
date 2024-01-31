@class NSString;

@interface ASCDefaultLockupTheme : NSObject <ASCLockupTheme, NSCopying>

@property (class, readonly) ASCDefaultLockupTheme *sharedTheme;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)preferredLabelAlignmentForSize:(id)a0;
+ (id)headingLabelColorForView:(id)a0;
+ (id)headingLabelFontForSize:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (long long)numberOfLinesInSubtitleForSize:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (long long)numberOfLinesInTitleForSize:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)offerStatusLabelFontForSize:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })preferredIconSizeForSize:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)subtitleLabelFontForView:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)titleLabelFontForView:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (void)updateOfferStatusLabelColorForView:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToLockupContentView:(id)a0 compatibleWithTraitCollection:(id)a1;

@end
