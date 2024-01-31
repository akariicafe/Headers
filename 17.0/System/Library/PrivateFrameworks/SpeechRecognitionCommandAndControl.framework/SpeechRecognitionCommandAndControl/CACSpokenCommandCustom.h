@class NSDictionary, NSString;

@interface CACSpokenCommandCustom : CACSpokenCommand

@property (readonly) NSDictionary *customProperties;
@property (retain) NSString *primaryCommand;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCustomCommand;
- (void)_setCustomProperties:(id)a0;
- (void)handleSpokenCommand:(id)a0;
- (id)initWithCommandIdentifier:(id)a0;

@end
