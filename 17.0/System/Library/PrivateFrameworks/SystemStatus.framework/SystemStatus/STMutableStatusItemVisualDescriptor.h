@class NSString;

@interface STMutableStatusItemVisualDescriptor : STStatusItemVisualDescriptor

@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *textLabel;

- (void).cxx_destruct;

@end
