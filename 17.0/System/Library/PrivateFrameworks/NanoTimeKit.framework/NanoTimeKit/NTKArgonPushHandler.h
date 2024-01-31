@class CKDatabase, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface NTKArgonPushHandler : NSObject <NTKArgonPushProviding>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
