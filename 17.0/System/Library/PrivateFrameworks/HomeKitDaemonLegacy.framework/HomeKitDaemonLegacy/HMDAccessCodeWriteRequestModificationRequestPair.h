@class HMDCharacteristicWriteRequest, NSArray;

@interface HMDAccessCodeWriteRequestModificationRequestPair : HMFObject

@property (readonly) HMDCharacteristicWriteRequest *writeRequest;
@property (readonly, copy) NSArray *modificationRequests;

- (void).cxx_destruct;
- (id)initWithWriteRequest:(id)a0 modificationRequests:(id)a1;

@end
