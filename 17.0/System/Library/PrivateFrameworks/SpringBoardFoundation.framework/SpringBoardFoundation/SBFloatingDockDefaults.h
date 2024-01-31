@interface SBFloatingDockDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL appLibraryEnabled;
@property (nonatomic) BOOL recentsEnabled;

- (void)_bindAndRegisterDefaults;

@end
