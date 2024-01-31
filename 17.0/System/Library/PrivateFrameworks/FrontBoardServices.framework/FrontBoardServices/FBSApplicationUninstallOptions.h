@interface FBSApplicationUninstallOptions : NSObject

@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (nonatomic) BOOL showsArchiveOption;

+ (id)userInitiated;

@end
