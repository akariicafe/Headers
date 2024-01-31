@class NSArray, SBSHomeScreenRectangleSilhouette, NSString;

@interface SBSHomeScreenSilhouetteLayout : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) SBSHomeScreenRectangleSilhouette *dock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIcons:(id)a0 dock:(id)a1;

@end
