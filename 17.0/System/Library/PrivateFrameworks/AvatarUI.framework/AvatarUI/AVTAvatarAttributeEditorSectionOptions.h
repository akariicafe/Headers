@class NSString, AVTAvatarPose, NSArray, AVTStickerConfiguration;

@interface AVTAvatarAttributeEditorSectionOptions : NSObject

@property (readonly, copy, nonatomic) NSString *framingMode;
@property (readonly, copy, nonatomic) AVTAvatarPose *poseOverride;
@property (readonly, copy, nonatomic) NSArray *presetOverrides;
@property (readonly, nonatomic) unsigned long long displayMode;
@property (readonly, copy, nonatomic) AVTStickerConfiguration *stickerConfiguration;
@property (readonly, nonatomic) BOOL showsLabel;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFramingMode:(id)a0 poseOverride:(id)a1 presetOverrides:(id)a2 displayMode:(unsigned long long)a3 stickerConfiguration:(id)a4 showsLabel:(BOOL)a5;
- (id)stringForDisplayMode;

@end
