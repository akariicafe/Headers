@class NSString, UIImage;

@interface CPUIMessageCellConfiguration : NSObject <CPUIMessageCellConfigurationProtocol>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIImage *trailingImage;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isUnread) BOOL unread;
@property (copy, nonatomic) NSString *trailingText;
@property (nonatomic) BOOL showsPin;
@property (nonatomic) BOOL showsStar;
@property (nonatomic) BOOL showsMute;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithText:(id)a0 detailText:(id)a1 image:(id)a2 unread:(BOOL)a3 showsPin:(BOOL)a4 showsStar:(BOOL)a5 showsMute:(BOOL)a6 trailingText:(id)a7 trailingImage:(id)a8;
+ (id)configurationWithText:(id)a0 detailText:(id)a1 image:(id)a2 unread:(BOOL)a3 showsPin:(BOOL)a4 showsStar:(BOOL)a5 showsMute:(BOOL)a6 trailingText:(id)a7 trailingImage:(id)a8 enabled:(BOOL)a9;

- (void).cxx_destruct;

@end
