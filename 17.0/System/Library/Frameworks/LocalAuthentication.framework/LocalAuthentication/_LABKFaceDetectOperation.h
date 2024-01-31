@class BKFaceDetectOperation;
@protocol BKFaceDetectOperationDelegate;

@interface _LABKFaceDetectOperation : _LABKPresenceDetectOperation

@property (readonly, nonatomic) BKFaceDetectOperation *_BKFaceDetectOperation;
@property (weak, nonatomic) id<BKFaceDetectOperationDelegate> delegate;

- (id)delegate;
- (void)operation:(id)a0 faceDetectStateChanged:(id)a1;

@end
