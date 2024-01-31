@class NSString;

@interface WBSAvailableAppWithExtension : NSObject

@property (readonly, copy, nonatomic) NSString *adamID;
@property (readonly, copy, nonatomic) NSString *platformSpecificBundleID;
@property (copy, nonatomic) NSString *requiredTeamID;

- (void).cxx_destruct;
- (id)initWithAdamID:(id)a0 platformSpecificBundleID:(id)a1;

@end
