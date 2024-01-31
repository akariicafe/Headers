@class NSData;

@interface SBSystemActionDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) NSData *configuredActionArchive;

- (void)_bindAndRegisterDefaults;

@end
