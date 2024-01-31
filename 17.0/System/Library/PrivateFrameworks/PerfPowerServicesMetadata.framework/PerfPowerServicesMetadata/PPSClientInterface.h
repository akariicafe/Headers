@interface PPSClientInterface : NSObject

+ (id)getAllSubsystem;
+ (void)buildDeviceMetadata;
+ (id)getMetadataByCategoryForSubsystem:(id)a0;
+ (id)getMetadataByNameForSubsystem:(id)a0 category:(id)a1;
+ (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
+ (id)getAllFrameworkSubsystem;
+ (id)getMetadataForSubsystem:(id)a0;
+ (id)getMetadataForSubsystem:(id)a0 category:(id)a1;
+ (id)getMetadataHistoryForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2;
+ (id)getMetadataHistoryForFilepath:(id)a0 subsystem:(id)a1 category:(id)a2 name:(id)a3;

@end
