@class NSString, NSUUID, NSSet, NSDate, NSNumber, TTSVBLocalVoiceMO;

@interface TTSVBLocalVoiceModelMO : NSManagedObject

@property (nonatomic) short apiVersion;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *creationDeviceModel;
@property (nonatomic, copy) NSString *creationDeviceName;
@property (nonatomic, copy) NSString *creationDeviceUDID;
@property (nonatomic, copy) NSString *creationOSBuild;
@property (nonatomic) int flags_;
@property (nonatomic, retain) NSNumber *isDownloaded;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic) short status_;
@property (nonatomic, copy) NSDate *trainingFinishedDate;
@property (nonatomic, copy) NSString *trainingMode;
@property (nonatomic) short trainingStatus_;
@property (nonatomic) double trainingTaskProgress;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, retain) NSSet *files;
@property (nonatomic, retain) TTSVBLocalVoiceMO *voice;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
