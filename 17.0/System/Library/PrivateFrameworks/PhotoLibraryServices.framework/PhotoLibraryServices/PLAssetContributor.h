@class PLShareParticipant;

@interface PLAssetContributor : PLManagedObject

@property (retain, nonatomic) PLShareParticipant *participant;

+ (id)entityName;

@end
