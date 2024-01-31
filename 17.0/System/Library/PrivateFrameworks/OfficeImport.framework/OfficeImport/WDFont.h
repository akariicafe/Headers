@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {
    NSString *mName;
    NSMutableArray *mAlternateNames;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}

+ (int)cpFontClassFromWdFontFamily:(int)a0;

- (void)setPitch:(int)a0;
- (id)init;
- (unsigned long long)hash;
- (void)setName:(id)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (int)pitch;
- (BOOL)isEqual:(id)a0;
- (void)setCharacterSet:(int)a0;
- (int)characterSet;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)alternateNames;
- (int)fontFamily;
- (void)setFontFamily:(int)a0;
- (void)addAlternateName:(id)a0;
- (id)secondName;

@end
