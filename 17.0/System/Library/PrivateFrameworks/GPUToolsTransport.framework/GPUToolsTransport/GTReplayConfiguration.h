@interface GTReplayConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL forceLoadActionClear;
@property (nonatomic) BOOL forceLoadUnusedResources;
@property (nonatomic) BOOL forceWaitUntilCompleted;
@property (nonatomic) BOOL disableOptimizeRestores;
@property (nonatomic) BOOL disableHeapTextureCompression;
@property (nonatomic) BOOL enableStopOnError;
@property (nonatomic) BOOL enableDisplayOnDevice;
@property (nonatomic) BOOL enableReplayFromOtherPlatforms;
@property (nonatomic) BOOL enableValidation;
@property (nonatomic) BOOL enableCapture;
@property (nonatomic) BOOL enableHUD;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
