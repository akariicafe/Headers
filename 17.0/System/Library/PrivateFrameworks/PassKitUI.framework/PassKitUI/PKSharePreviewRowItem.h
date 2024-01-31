@class NSString, UIImage, UIColor;

@interface PKSharePreviewRowItem : NSObject <PKIdentifiable>

@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) BOOL displayChevron;
@property (nonatomic) unsigned long long displayToggleState;
@property (nonatomic) BOOL toggleEnabled;
@property (nonatomic) BOOL isShowingSensitiveContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToSharePreviewRowItem:(id)a0;

@end
