@class NSDictionary;
@protocol HMDDataStreamBulkSendSession;

@interface HMDDataStreamBulkSendOpenSessionResult : NSObject

@property (readonly, nonatomic) id<HMDDataStreamBulkSendSession> session;
@property (readonly, nonatomic) NSDictionary *payload;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithSession:(id)a0 payload:(id)a1;

@end
