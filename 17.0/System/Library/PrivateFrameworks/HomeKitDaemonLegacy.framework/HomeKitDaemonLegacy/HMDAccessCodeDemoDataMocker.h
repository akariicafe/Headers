@class NSString, NSMutableDictionary;

@interface HMDAccessCodeDemoDataMocker : HMFObject <HMFLogging>

@property (readonly) NSMutableDictionary *accessCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)_controlResponseForReadRequest:(id)a0;
- (id)_controlResponseForWriteRequest:(id)a0;
- (id)_handleAddRequest:(id)a0;
- (id)_handleListRequest;
- (id)_handleReadRequest:(id)a0;
- (id)_handleRemoveRequest:(id)a0;
- (id)_handleUpdateRequest:(id)a0;
- (id)handleReadRequests:(id)a0;
- (id)handleWriteRequests:(id)a0;

@end
