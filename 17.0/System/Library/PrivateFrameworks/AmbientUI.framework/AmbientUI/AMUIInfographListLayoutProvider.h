@interface AMUIInfographListLayoutProvider : NSObject <SBIconListLayoutProvider>

@property (readonly, nonatomic) unsigned long long screenType;

- (id)init;
- (id)initWithScreenType:(unsigned long long)a0;
- (id)layoutForIconLocation:(id)a0;
- (void)configureRootFolderConfiguration:(id)a0 screenType:(unsigned long long)a1;

@end
