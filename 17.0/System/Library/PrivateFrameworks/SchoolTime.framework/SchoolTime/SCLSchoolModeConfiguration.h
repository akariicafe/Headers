@class NSXPCListenerEndpoint, NSString, NSUUID, NSObject;
@protocol OS_dispatch_queue, SCLSchoolModeDelegate;

@interface SCLSchoolModeConfiguration : NSObject <NSCopying> {
    NSXPCListenerEndpoint *_testingEndpoint;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *testingEndpoint;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (weak, nonatomic) id<SCLSchoolModeDelegate> delegate;
@property (copy, nonatomic) NSUUID *pairingID;
@property (nonatomic) BOOL loadsSynchronously;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
