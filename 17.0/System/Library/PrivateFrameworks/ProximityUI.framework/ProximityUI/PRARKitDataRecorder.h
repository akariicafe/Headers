@class ARSession, NSURL, NSString;

@interface PRARKitDataRecorder : PRDataRecorder

@property (retain, nonatomic) ARSession *session;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSString *filename;

- (void)start;
- (void).cxx_destruct;
- (id)initWithARSession:(id)a0;
- (void)stopAndDiscard;
- (id)stopAndSave;

@end
