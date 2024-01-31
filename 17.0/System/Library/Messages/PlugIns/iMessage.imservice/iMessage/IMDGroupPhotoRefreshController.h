@class MessageServiceSession, NSMutableSet;

@interface IMDGroupPhotoRefreshController : NSObject

@property (readonly, weak, nonatomic) MessageServiceSession *session;
@property (retain, nonatomic) NSMutableSet *refreshRequests;
@property (readonly, nonatomic) double minRefreshTime;
@property (readonly, nonatomic) double maxRefreshTime;

- (id)initWithSession:(id)a0;
- (void)dealloc;
- (id)stickerRefreshDeliveryController;
- (void).cxx_destruct;
- (void)refreshTTLForGroupPhoto:(id)a0 chat:(id)a1;
- (BOOL)shouldRefreshTTLForGroupPhoto:(id)a0 chatGUID:(id)a1;

@end
