@class NSString, NSURL;

@interface GCNotificationOptions : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *categoryID;
@property (retain, nonatomic) NSString *threadID;
@property (retain, nonatomic) NSURL *defaultActionURL;

- (void).cxx_destruct;

@end
