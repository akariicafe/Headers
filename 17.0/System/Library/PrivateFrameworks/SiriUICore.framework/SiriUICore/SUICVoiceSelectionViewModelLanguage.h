@class NSString;

@interface SUICVoiceSelectionViewModelLanguage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL isCurrentOutputLanguage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLanguageCode:(id)a0 localizedDisplayName:(id)a1 isCurrentOutputLanguage:(BOOL)a2;

@end
