@class NSString, NSURL, UIImage;

@interface PSUIAppDescription : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *publisher;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSURL *installURL;
@property (retain, nonatomic) UIImage *icon;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAMSMediaResponseDictionary:(id)a0;

@end
