@class NSArray;

@interface SUICVoiceSelectionViewModel : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *languages;
@property (readonly, copy, nonatomic) NSArray *voices;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLanguages:(id)a0 voices:(id)a1;

@end
