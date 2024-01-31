@class NSArray, NSString, UNNotificationAction;

@interface UNNotificationCategory : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *minimalActions;
@property (readonly, copy, nonatomic) NSString *actionsMenuTitle;
@property (readonly, copy, nonatomic) UNNotificationAction *alternateAction;
@property (readonly, nonatomic) unsigned long long backgroundStyle;
@property (readonly, nonatomic) unsigned long long listPriority;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSArray *intentIdentifiers;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder;
@property (readonly, copy, nonatomic) NSString *categorySummaryFormat;

+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 intentIdentifiers:(id)a2 hiddenPreviewsBodyPlaceholder:(id)a3 options:(unsigned long long)a4;
+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 intentIdentifiers:(id)a2 options:(unsigned long long)a3;
+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 intentIdentifiers:(id)a2 hiddenPreviewsBodyPlaceholder:(id)a3 categorySummaryFormat:(id)a4 options:(unsigned long long)a5;
+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 minimalActions:(id)a2 intentIdentifiers:(id)a3 options:(unsigned long long)a4;
+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 minimalActions:(id)a2 intentIdentifiers:(id)a3 hiddenPreviewsBodyPlaceholder:(id)a4 categorySummaryFormat:(id)a5 options:(unsigned long long)a6;
+ (id)categoryWithIdentifier:(id)a0 actions:(id)a1 minimalActions:(id)a2 intentIdentifiers:(id)a3 hiddenPreviewsBodyPlaceholder:(id)a4 options:(unsigned long long)a5;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIdentifier:(id)a0 actions:(id)a1 minimalActions:(id)a2 alternateAction:(id)a3 intentIdentifiers:(id)a4 hiddenPreviewsBodyPlaceholder:(id)a5 categorySummaryFormat:(id)a6 actionsMenuTitle:(id)a7 options:(unsigned long long)a8 backgroundStyle:(unsigned long long)a9 listPriority:(unsigned long long)a10;

@end
