@class NSString, WBSTemplateIconMonogramConfiguration, UIColor;

@interface WBSTemplateIconRequest : WBSSiteMetadataRequest

@property (readonly, copy, nonatomic) NSString *monogramTitle;
@property (readonly, nonatomic) WBSTemplateIconMonogramConfiguration *monogramConfiguration;
@property (readonly, nonatomic) UIColor *overrideForegroundColor;
@property (readonly, nonatomic) BOOL saveToDisk;

- (id)initWithURL:(id)a0 extraInfo:(id)a1;
- (id)initWithURL:(id)a0 title:(id)a1 monogramConfiguration:(id)a2 overrideForegroundColor:(id)a3 saveToDisk:(BOOL)a4;

@end
