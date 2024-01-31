@class NSString, NSBundle;

@interface SUUIExternalResourceImage : NSObject

@property (copy, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSBundle *bundle;
@property (nonatomic) BOOL alwaysTemplate;

- (void).cxx_destruct;

@end
