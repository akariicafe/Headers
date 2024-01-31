@class NSString, NSNumber, WFImage;

@interface WFWindow : NSObject <NSCopying, NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL boundsLoaded;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *applicationName;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } position;
@property (readonly, nonatomic) BOOL isOnScreen;
@property (retain, nonatomic) NSNumber *windowIndex;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) WFImage *image;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)allWindowsForBundleIdentifiers:(id)a0;
+ (id)allWindows;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBoundsNeedReloading;

@end
