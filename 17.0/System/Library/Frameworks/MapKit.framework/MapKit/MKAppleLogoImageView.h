@class NSString;

@interface MKAppleLogoImageView : UIImageView <MKAppleLogoView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logoForMapType:(unsigned long long)a0 forDarkMode:(BOOL)a1;

- (void)setImage:(id)a0;
- (id)initForMapType:(unsigned long long)a0 forDarkMode:(BOOL)a1;
- (void)updateForMapType:(unsigned long long)a0 darkMode:(BOOL)a1;

@end
