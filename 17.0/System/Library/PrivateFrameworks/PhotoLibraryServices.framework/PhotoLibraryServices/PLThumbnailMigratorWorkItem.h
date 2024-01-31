@class NSString, PLManagedAsset;

@interface PLThumbnailMigratorWorkItem : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (copy, nonatomic) NSString *masterThumbFilePath;
@property (nonatomic) unsigned long long destinationThumbnailIndex;
@property (nonatomic) BOOL succeeded;

- (void).cxx_destruct;

@end
