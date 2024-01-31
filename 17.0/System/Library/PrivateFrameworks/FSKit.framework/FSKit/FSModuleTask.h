@class NSUUID, NSProgress, FSTaskProgressConnector, FSTaskDescription;

@interface FSModuleTask : NSObject

@property (copy) NSUUID *taskUUID;
@property (retain) FSTaskDescription *taskDescription;
@property (retain) NSProgress *taskProgress;
@property (retain) FSTaskProgressConnector *connector;
@property BOOL wasCanceled;

+ (id)newWithID:(id)a0 description:(id)a1 progress:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 description:(id)a1 progress:(id)a2;

@end
