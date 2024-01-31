@class NSString;
@protocol HMDDataStreamBulkSendListener;

@interface HMDPendingBulkSendListener : NSObject

@property (weak, nonatomic) id<HMDDataStreamBulkSendListener> listener;
@property (retain, nonatomic) NSString *fileType;

- (void).cxx_destruct;
- (id)initWithListener:(id)a0 fileType:(id)a1;

@end
