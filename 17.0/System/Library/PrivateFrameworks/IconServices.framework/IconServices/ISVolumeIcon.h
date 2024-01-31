@class NSString;

@interface ISVolumeIcon : ISConcreteIcon

@property (readonly) NSString *kextBundleIdentifier;
@property (readonly) NSString *kextIconName;
@property (readonly) unsigned int typeCode;

- (void).cxx_destruct;

@end
