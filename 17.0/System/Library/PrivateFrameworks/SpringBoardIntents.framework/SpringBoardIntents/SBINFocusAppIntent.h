@class NSString;

@interface SBINFocusAppIntent : SBINAppIntent

@property (readonly, nonatomic) NSString *modeIdentifier;

- (unsigned long long)hash;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithModeIdentifier:(id)a0 systemContext:(id)a1;

@end
