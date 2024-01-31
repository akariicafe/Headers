@class NSString, NSArray;

@interface BlastDoorPreviewAudio : NSObject {
    void /* unknown type, empty encoding */ previewAudio;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSArray *powerLevels;

- (id)init;
- (void).cxx_destruct;

@end
