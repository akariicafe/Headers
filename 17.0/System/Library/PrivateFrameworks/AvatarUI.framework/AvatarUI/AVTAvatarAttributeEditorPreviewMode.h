@class AVTAvatarAttributeEditorPreviewModeOptions;

@interface AVTAvatarAttributeEditorPreviewMode : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) AVTAvatarAttributeEditorPreviewModeOptions *options;

+ (unsigned long long)attributeEditorPreviewModeTypeForEditingPreviewModeType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 options:(id)a1;

@end
