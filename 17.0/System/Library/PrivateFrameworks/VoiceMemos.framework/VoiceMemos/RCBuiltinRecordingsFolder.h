@class NSArray, NSString;
@protocol RCFolderIdentifier;

@interface RCBuiltinRecordingsFolder : NSObject <RCFolder> {
    long long _folderType;
}

@property (class, readonly, nonatomic) NSArray *allBuiltInFolders;

@property (readonly, nonatomic) id<RCFolderIdentifier> folderControllerID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long rank;
@property (readonly, nonatomic) long long folderType;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)builtInFolderWithType:(long long)a0;

- (BOOL)containsRecording:(id)a0;
- (id)initWithType:(long long)a0;

@end
