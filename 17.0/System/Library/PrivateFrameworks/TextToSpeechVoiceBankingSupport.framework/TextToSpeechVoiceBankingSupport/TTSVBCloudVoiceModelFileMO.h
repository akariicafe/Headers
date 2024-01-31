@class NSString, TTSVBCloudVoiceModelMO;
@protocol _NSFileBackedFuture;

@interface TTSVBCloudVoiceModelFileMO : NSManagedObject

@property (nonatomic) short apiVersion;
@property (nonatomic, copy) NSString *relativePath;
@property (nonatomic, retain) TTSVBCloudVoiceModelMO *model;
@property (nonatomic, retain) id<_NSFileBackedFuture> fileFuture;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
