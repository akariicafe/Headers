@class NSNumber, NSString, FPSandboxingURLWrapper, NSURL, INFile, NSArray, WFContentItem;

@interface WFOnScreenContentNode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *chatRegistryContinuityKey;
@property (readonly, nonatomic) WFContentItem *contentItem;
@property (readonly, nonatomic) FPSandboxingURLWrapper *wrapper;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) INFile *file;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *photoAssetIdentifier;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } applicationFrame;
@property (readonly, nonatomic) NSNumber *applicationLevel;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addChildren:(id)a0;
- (void)addChild:(id)a0;
- (void)removeChild:(id)a0;
- (void)populateObjectsFromContentItem:(id)a0;
- (id)initWithContentItem:(id)a0 file:(id)a1 applicationBundleIdentifier:(id)a2 applicationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 applicationLevel:(id)a4 source:(id)a5;
- (id)initWithContentItem:(id)a0 file:(id)a1 applicationBundleIdentifier:(id)a2 source:(id)a3;
- (id)initWithURLWrapper:(id)a0 applicationBundleIdentifier:(id)a1 source:(id)a2;

@end
