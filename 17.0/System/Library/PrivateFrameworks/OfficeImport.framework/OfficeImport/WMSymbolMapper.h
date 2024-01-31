@class NSString;

@interface WMSymbolMapper : CMMapper {
    unsigned short mCharacter;
    NSString *mFontName;
}

+ (BOOL)isSymbolFontName:(id)a0;
+ (unsigned short)mapCharacter:(unsigned short)a0 withFontName:(id)a1;
+ (unsigned short)mapWindingsCharacter:(unsigned short)a0;
+ (unsigned short)mapZapfDingbatsCharacter:(unsigned short)a0;

- (void).cxx_destruct;
- (id)initWithWDSymbol:(id)a0 parent:(id)a1;
- (void)mapAt:(id)a0 withState:(id)a1;

@end
