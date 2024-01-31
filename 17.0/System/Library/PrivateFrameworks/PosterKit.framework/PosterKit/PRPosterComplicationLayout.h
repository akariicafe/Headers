@class NSArray, NSDictionary, NSString, PRSWidget;

@interface PRPosterComplicationLayout : NSObject <NSSecureCoding, BSXPCSecureCoding, NSMutableCopying, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PRSWidget *inlineComplication;
@property (readonly, copy, nonatomic) NSDictionary *sidebarComplicationIconLayout;
@property (readonly, copy, nonatomic) NSArray *sidebarComplications;
@property (readonly, copy, nonatomic) NSArray *complications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)_complications:(id)a0 AreEqualTo:(id)a1;
- (id)initWithInlineComplication:(id)a0 complications:(id)a1;
- (void).cxx_destruct;
- (id)initWithInlineComplication:(id)a0 sidebarComplicationIconLayout:(id)a1 sidebarComplications:(id)a2 complications:(id)a3;
- (id)initWithInlineComplication:(id)a0 sidebarComplications:(id)a1 complications:(id)a2;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqualToComplicationLayout:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
