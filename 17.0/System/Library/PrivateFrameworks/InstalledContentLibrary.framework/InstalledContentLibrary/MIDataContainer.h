@interface MIDataContainer : MIContainer

@property (nonatomic) int contentProtectionClass;

+ (id)dataContainerForExecutableBundle:(id)a0 forPersona:(id)a1 createIfNeeded:(BOOL)a2 temporary:(BOOL)a3 created:(BOOL *)a4 error:(id *)a5;

- (id)_oldCompatiblityLinkDestination;
- (void)makeSymlinkToBundleInContainerIfNeeded:(id)a0;

@end
