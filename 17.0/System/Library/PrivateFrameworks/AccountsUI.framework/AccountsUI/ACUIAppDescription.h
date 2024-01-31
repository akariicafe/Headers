@class NSString, UIImage;

@interface ACUIAppDescription : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *publisher;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *persistentID;
@property (retain, nonatomic) UIImage *icon;

- (void).cxx_destruct;

@end
