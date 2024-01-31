@class NSString;

@interface DNDAppConfigurationTargetContentIdentifierPrefixMO : DNDPerAppSettingsMO

@property (copy, nonatomic) NSString *targetContentIdentifierPrefix;

+ (id)fetchRequest;

@end
