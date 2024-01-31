@class UIColor, BSAuditToken, NSString, NSArray;

@interface UIActivityContentContext : NSObject

@property (nonatomic) BOOL isRemote;
@property (retain, nonatomic) BSAuditToken *hostAuditToken;
@property (nonatomic) BOOL canRenderPeople;
@property (nonatomic) BOOL configureForCloudSharing;
@property (nonatomic) BOOL configureForPhotosEdit;
@property (nonatomic) BOOL hideHeaderView;
@property (nonatomic) BOOL sharingExpanded;
@property (nonatomic) BOOL showHeroActionsHorizontally;
@property (copy, nonatomic) NSString *topContentSectionText;
@property (copy, nonatomic) NSArray *applicationActivityTypes;
@property (copy, nonatomic) NSArray *heroActionActivityTypes;
@property (retain, nonatomic) UIColor *tintColor;

- (void).cxx_destruct;

@end
