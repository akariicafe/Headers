@interface ICInlineDrawingAnalyticsInformation : NSObject

@property (nonatomic) unsigned long long startFingerStrokeCount;
@property (nonatomic) unsigned long long startPencilStrokeCount;
@property (nonatomic) unsigned long long endFingerStrokeCount;
@property (nonatomic) unsigned long long endPencilStrokeCount;
@property (nonatomic) long long lastUsedTool;

@end
