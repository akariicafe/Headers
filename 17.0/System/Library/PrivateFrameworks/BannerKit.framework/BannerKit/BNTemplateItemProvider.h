@class NSString, NSAttributedString, UIButtonConfiguration;
@protocol BNImageProviding;

@interface BNTemplateItemProvider : NSObject <BNTemplateTextProviding, BNTemplateViewProviding> {
    long long _templateItemType;
    id _templateItem;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *templateItemText;
@property (readonly, copy, nonatomic) NSAttributedString *templateItemAttributedText;
@property (nonatomic) long long visualStyleCategory;
@property (nonatomic) long long visualStyle;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<BNImageProviding> templateItemImageProvider;
@property (readonly, nonatomic) UIButtonConfiguration *templateItemButtonConfiguration;

@end
