@class AXAuditElement, NSString, NSArray, AXAuditIssueDescriptionManager, NSNumber;

@interface AXAuditIssue : NSObject <NSCopying>

@property (nonatomic) long long issueClassification;
@property (retain, nonatomic) AXAuditIssueDescriptionManager *descManager;
@property (retain, nonatomic) NSString *auditTestType;
@property (retain, nonatomic) AXAuditElement *auditElement;
@property (retain, nonatomic) NSString *elementDescription;
@property (retain, nonatomic) NSArray *longDescExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } elementRect;
@property (nonatomic) struct CGPoint { double x; double y; } containerOrigin;
@property (retain, nonatomic) NSString *elementText;
@property (retain, nonatomic) NSString *mlGeneratedDescription;
@property (nonatomic) BOOL isDuplicate;
@property (retain, nonatomic) NSString *screenGroupId;
@property (retain, nonatomic) NSString *foregroundColor;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *timeStamp;
@property (nonatomic) long long platform;
@property (retain, nonatomic) NSArray *suggestedSelectorsToFix;
@property (retain, nonatomic) NSNumber *imageIdentifier;

+ (Class)_auditIssueClassForType:(long long)a0;
+ (id)auditIssueForClassification:(long long)a0;
+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)foundLogMessage;
- (BOOL)_isSameRelativeLocationAsAuditIssue:(id)a0;
- (long long)_platformForClassification:(long long)a0;

@end
