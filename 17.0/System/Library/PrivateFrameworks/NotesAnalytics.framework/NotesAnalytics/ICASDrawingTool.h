@interface ICASDrawingTool : NSObject <AADataType>

@property (readonly, nonatomic) long long drawingTool;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithDrawingTool:(long long)a0;

@end
