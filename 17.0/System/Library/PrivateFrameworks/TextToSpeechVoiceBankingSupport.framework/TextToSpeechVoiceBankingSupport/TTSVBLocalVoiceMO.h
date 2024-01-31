@class NSString, NSUUID, NSSet;

@interface TTSVBLocalVoiceMO : NSManagedObject

@property (nonatomic) short apiVersion;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSUUID *voiceID;
@property (nonatomic, retain) NSSet *models;
@property (nonatomic, retain) NSSet *samples;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
