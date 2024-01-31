@class NSString, FBKFormResponse, FBKFeedbackFollowup, NSDate, NSNumber;

@interface FBKFilePromise : FBKManagedFeedbackObject <FBKDownloadableFilePromise>

@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) long long size;
@property (retain, nonatomic) NSNumber *statusEnum;
@property (retain) FBKFormResponse *formResponse;
@property (retain) FBKFeedbackFollowup *feedbackFollowup;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *localizedDownloadErrorString;

+ (id)entityName;
+ (unsigned long long)downloadStateWithUUID:(id)a0 state:(long long)a1 creationDate:(id)a2 contentItem:(id)a3;
+ (id)localizedDownloadErrorStringForState:(unsigned long long)a0;

- (unsigned long long)downloadState;
- (BOOL)canDownload;
- (void)setPropertiesFromJSONObject:(id)a0;

@end
