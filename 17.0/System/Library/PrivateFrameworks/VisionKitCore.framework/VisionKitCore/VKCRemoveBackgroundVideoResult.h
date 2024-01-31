@class UTType, MADVideoRemoveBackgroundResult, NSData, NSNumber, VKCRemoveBackgroundVideoRequest;

@interface VKCRemoveBackgroundVideoResult : NSObject

@property (retain, nonatomic) MADVideoRemoveBackgroundResult *madResult;
@property (retain, nonatomic) VKCRemoveBackgroundVideoRequest *request;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (readonly, nonatomic) UTType *utType;
@property (readonly, nonatomic) NSData *data;
@property (retain, nonatomic) NSNumber *animatedStickerScore;

- (void).cxx_destruct;
- (id)initWithMADVideoResult:(id)a0 request:(id)a1;
- (void)generateVideoSizeWithData:(id)a0;

@end
