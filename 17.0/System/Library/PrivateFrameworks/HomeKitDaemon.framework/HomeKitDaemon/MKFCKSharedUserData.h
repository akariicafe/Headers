@class NSUUID, NSString, _MKFUser, NSDate;

@interface MKFCKSharedUserData : MKFCKModel {
    _MKFUser *_workingStoreUser;
}

@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;

+ (id)fetchRequest;
+ (id)rootKeyPath;

- (void).cxx_destruct;
- (id)workingStoreUser;

@end
