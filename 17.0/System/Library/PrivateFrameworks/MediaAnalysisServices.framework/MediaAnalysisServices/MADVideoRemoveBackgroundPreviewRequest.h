@class MADVideoRemoveBackgroundPreviewResult;

@interface MADVideoRemoveBackgroundPreviewRequest : MADVideoRequest

@property (readonly, nonatomic) MADVideoRemoveBackgroundPreviewResult *result;

+ (BOOL)supportsSecureCoding;

- (id)description;

@end
