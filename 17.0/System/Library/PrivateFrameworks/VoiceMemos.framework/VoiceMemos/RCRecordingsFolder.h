@class NSString;
@protocol RCFolderIdentifier;

@interface RCRecordingsFolder : NSManagedObject <RCMutableFolder>

@property (readonly, nonatomic) long long countOfRecordings;
@property (retain, nonatomic) NSString *encryptedName;
@property (retain, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long rank;
@property (readonly, nonatomic) id<RCFolderIdentifier> folderControllerID;
@property (readonly, nonatomic) long long folderType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingCount;

@end
