@class NSString, PRSPosterPath, PRPosterSnapshotRequest, NSDate, PRPosterSceneSettings, NSNumber;

@interface _PRPosterEnqueuedSnapshot : NSObject <BSInvalidatable>

@property (readonly, nonatomic) PRPosterSnapshotRequest *request;
@property (readonly, nonatomic) PRPosterSceneSettings *posterSettings;
@property (readonly, nonatomic) PRSPosterPath *path;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) NSNumber *priority;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
