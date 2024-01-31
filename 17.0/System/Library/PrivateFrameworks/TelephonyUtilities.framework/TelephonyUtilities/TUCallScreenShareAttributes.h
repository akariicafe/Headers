@class NSUUID, NSString, NSValue, NSNumber;

@interface TUCallScreenShareAttributes : NSObject <TUScreenShareAttributes>

@property (class, readonly, nonatomic) long long currentDeviceFamily;
@property (class, readonly, copy, nonatomic) NSNumber *defaultDisplayScale;
@property (class, readonly, copy, nonatomic) NSNumber *defaultScaleFactor;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long deviceFamily;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSNumber *displayScale;
@property (retain, nonatomic) NSNumber *scaleFactor;
@property (retain, nonatomic) NSNumber *frameRate;
@property (retain, nonatomic) NSNumber *displayID;
@property (retain, nonatomic) NSValue *originalResolution;
@property (nonatomic, getter=isWindowed) BOOL windowed;
@property (retain, nonatomic) NSUUID *windowUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originalResolutionWithContentScale:(id)a0 contentRect:(id)a1 displayScale:(id)a2;
+ (id)defaultAttributes;

- (id)initWithAttributes:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToScreenShareAttributes:(id)a0;
- (BOOL)isSignificantChangeFromAttributes:(id)a0;
- (void)setResolutionAttributesWithContentScale:(id)a0 contentRect:(id)a1 displayScale:(id)a2;

@end
