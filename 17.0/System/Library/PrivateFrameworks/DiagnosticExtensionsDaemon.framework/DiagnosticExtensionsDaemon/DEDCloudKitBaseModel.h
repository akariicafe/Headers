@class NSMutableArray, NSString, CKRecord, NSObject;
@protocol OS_os_log;

@interface DEDCloudKitBaseModel : NSObject <DEDCloudKitModel>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) CKRecord *cloudKitModel;
@property (readonly, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSMutableArray *dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
