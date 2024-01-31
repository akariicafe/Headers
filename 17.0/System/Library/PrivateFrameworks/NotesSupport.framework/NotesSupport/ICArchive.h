@class NSString, UTType;

@interface ICArchive : NSObject

@property (class, readonly, copy, nonatomic) UTType *universalTypeIdentifier;
@property (class, readonly, copy, nonatomic) NSString *userDefaultsKey;
@property (class, readonly, copy, nonatomic) NSString *demoModeUserDefaultsKey;

@end
